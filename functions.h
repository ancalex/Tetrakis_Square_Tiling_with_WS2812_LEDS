#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

CRGBPalette16 currentPalette;

const byte m_leds[128] = {
		111, 112, 79, 80, 47, 48, 15, 16,
		110, 113, 78, 81, 46, 49, 14, 17,
		109, 77, 114, 45, 82, 13, 50, 18,
		108, 76, 115, 44, 83, 12, 51, 19,
		75, 107, 43, 116, 11, 84, 20, 52,
		74, 106, 42, 117, 10, 85, 21, 53,
		73, 41, 105, 9, 118, 22, 86, 54,
		72, 40, 104, 8, 119, 23, 87, 55,
		39, 71, 7, 103, 24, 120, 56, 88,
		38, 70, 6, 102, 25, 121, 57, 89,
		37, 5, 69, 26, 101, 58, 122, 90,
		36, 4, 68, 27, 100, 59, 123, 91,
		3, 35, 28, 67, 60, 99, 92, 124,
		2, 34, 29, 66, 61, 98, 93, 125,
		1, 30, 33, 62, 65, 94, 97, 126,
		0, 31, 32, 63, 64, 95, 96, 127
};

byte one_cell[8];
byte four_cells[32];
byte sixteen_cells[128];

// this finds the right index within a serpentine matrix
uint16_t XY( uint8_t x, uint8_t y) {
	uint16_t i;
	uint16_t m = 0;
	if (x > 7) {
		m = m + 128;
		x = x - 8;
	}
	if (y > 15) {
		y = y - 16;
		m = m + 256;
	}
	i = m_leds[y * 8 + x];
	i = i + m;
	return i;
}

void one_cell_init() {
	for (byte c = 0; c < 8; c++) {
		one_cell[c] = ESP8266TrueRandom.random(256);
	}
}

void four_cells_init() {
	for (byte c = 0; c < 32; c++) {
		four_cells[c] = ESP8266TrueRandom.random(256);
	}
}

void sixteen_cells_init() {
	for (byte c = 0; c < 128; c++) {
		sixteen_cells[c] = ESP8266TrueRandom.random(256);
	}
}

void one_cell_no_symmetry() {
	one_cell_init();
	int i = 0;
	for (int x = 0; x < 16; x += 2) {
		for (int y = 0; y < 32; y += 4 ) {
			for (int x1 = 0; x1 < 2; x1++) {
				for (int y1 = 0; y1 < 4; y1++) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, one_cell[i]);
					i++;
				}
			}
			i = 0;
		}
	}
}

void one_cell_horizontal_symmetry() {
	one_cell_init();
	int i = 0;
	for (int x = 0; x < 16; x += 4) {
		for (int y = 0; y < 32; y += 4 ) {
			for (int x1 = 0; x1 < 2; x1++) {
				for (int y1 = 0; y1 < 4; y1++) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, one_cell[i]);
					i++;
				}
			}
			i = 0;
		}
	}
	i = 0;
	for (int x = 2; x < 16; x += 4) {
		for (int y = 0; y < 32; y += 4 ) {
			for (int x1 = 1; x1 >= 0; x1--) {
				for (int y1 = 0; y1 < 4; y1++) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, one_cell[i]);
					i++;
				}
			}
			i = 0;
		}
	}
}

void one_cell_vertical_symmetry() {
	one_cell_init();
	int i = 0;
	for (int x = 0; x < 16; x += 2) {
		for (int y = 0; y < 32; y += 8 ) {
			for (int x1 = 0; x1 < 2; x1++) {
				for (int y1 = 0; y1 < 4; y1++) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, one_cell[i]);
					i++;
				}
			}
			i = 0;
		}
	}
	i = 0;
	for (int x = 0; x < 16; x += 2) {
		for (int y = 4; y < 32; y += 8 ) {
			for (int x1 = 0; x1 < 2; x1++) {
				for (int y1 = 3; y1 >= 0; y1--) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, one_cell[i]);
					i++;
				}
			}
			i = 0;
		}
	}
}

void one_cell_both_symmetry() {
	one_cell_init();
	int i = 0;
	for (int x = 0; x < 16; x += 4) {
		for (int y = 0; y < 32; y += 8 ) {
			for (int x1 = 0; x1 < 2; x1++) {
				for (int y1 = 0; y1 < 4; y1++) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, one_cell[i]);
					i++;
				}
			}
			i = 0;
		}
	}
	i = 0;
	for (int x = 2; x < 16; x += 4) {
		for (int y = 0; y < 32; y += 8 ) {
			for (int x1 = 1; x1 >= 0; x1--) {
				for (int y1 = 0; y1 < 4 ; y1++) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, one_cell[i]);
					i++;
				}
			}
			i = 0;
		}
	}
	i = 0;
	for (int x = 0; x < 16; x += 4) {
		for (int y = 4; y < 32; y += 8 ) {
			for (int x1 = 0; x1 < 2; x1++) {
				for (int y1 = 3; y1 >= 0; y1--) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, one_cell[i]);
					i++;
				}
			}
			i = 0;
		}
	}
	i = 0;
	for (int x = 2; x < 16; x += 4) {
		for (int y = 4; y < 32; y += 8 ) {
			for (int x1 = 1; x1 >= 0; x1--)  {
				for (int y1 = 3; y1 >= 0; y1--) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, one_cell[i]);
					i++;
				}
			}
			i = 0;
		}
	}
}

void four_cells_no_symmetry() {
	four_cells_init();
	int i = 0;
	for (int x = 0; x < 16; x += 4) {
		for (int y = 0; y < 32; y += 8) {
			for (int x1 = 0; x1 < 4; x1++) {
				for (int y1 = 0; y1 < 8; y1++) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, four_cells[i]);
					i++;
				}
			}
			i = 0;
		}
	}
}

void four_cells_horizontal_symmetry() {
	four_cells_init();
	int i = 0;
	for (int x = 0; x < 16; x += 8) {
		for (int y = 0; y < 32; y += 8) {
			for (int x1 = 0; x1 < 4; x1++) {
				for (int y1 = 0; y1 < 8; y1++) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, four_cells[i]);
					i++;
				}
			}
			i = 0;
		}
	}
	i = 0;
	for (int x = 4; x < 16; x += 8) {
		for (int y = 0; y < 32; y += 8) {
			for (int x1 = 3; x1 >= 0; x1--) {
				for (int y1 = 0; y1 < 8; y1++) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, four_cells[i]);
					i++;
				}
			}
			i = 0;
		}
	}
}

void four_cells_vertical_symmetry() {
	four_cells_init();
	int i = 0;
	for (int x = 0; x < 16; x += 4) {
		for (int y = 0; y < 32; y += 16) {
			for (int x1 = 0; x1 < 4; x1++) {
				for (int y1 = 0; y1 < 8; y1++) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, four_cells[i]);
					i++;
				}
			}
			i = 0;
		}
	}
	i = 0;
	for (int x = 0; x < 16; x += 4) {
		for (int y = 8; y < 32; y += 16) {
			for (int x1 = 0; x1 < 4; x1++) {
				for (int y1 = 7; y1 >= 0; y1--) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, four_cells[i]);
					i++;
				}
			}
			i = 0;
		}
	}
}

void four_cells_both_symmetry() {
	four_cells_init();
	int i = 0;
	for (int x = 0; x < 16; x += 8) {
		for (int y = 0; y < 32; y += 16) {
			for (int x1 = 0; x1 < 4; x1++) {
				for (int y1 = 0; y1 < 8; y1++) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, four_cells[i]);
					i++;
				}
			}
			i = 0;
		}
	}
	i = 0;
	for (int x = 4; x < 16; x += 8) {
		for (int y = 0; y < 32; y += 16) {
			for (int x1 = 3; x1 >= 0; x1--) {
				for (int y1 = 0; y1 < 8; y1++) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, four_cells[i]);
					i++;
				}
			}
			i = 0;
		}
	}
	i = 0;
	for (int x = 0; x < 16; x += 8) {
		for (int y = 8; y < 32; y += 16) {
			for (int x1 = 0; x1 < 4; x1++) {
				for (int y1 = 7; y1 >= 0; y1--) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, four_cells[i]);
					i++;
				}
			}
			i = 0;
		}
	}
	i = 0;
	for (int x = 4; x < 16; x += 8) {
		for (int y = 8; y < 32; y += 16) {
			for (int x1 = 3; x1 >= 0; x1--) {
				for (int y1 = 7; y1 >= 0; y1--) {
					leds[XY(x + x1, y + y1)] = ColorFromPalette( currentPalette, four_cells[i]);
					i++;
				}
			}
			i = 0;
		}
	}
}

void sixteen_cells_both_symmetry() {
	sixteen_cells_init();
	int i = 0;
	for (int x = 0; x < 8; x++) {
		for (int y = 0; y < 16; y++) {
					leds[XY(x, y)] = ColorFromPalette( currentPalette, sixteen_cells[i]);
					i++;
		}
	}
	i = 0;
	for (int x = 15; x >= 8; x--) {
		for (int y = 0; y < 16; y++) {
					leds[XY(x, y)] = ColorFromPalette( currentPalette, sixteen_cells[i]);
					i++;
		}
	}
	i = 0;
	for (int x = 0; x < 8; x++) {
		for (int y = 31; y >= 16; y--) {
					leds[XY(x, y)] = ColorFromPalette( currentPalette, sixteen_cells[i]);
					i++;
		}
	}
	i = 0;
	for (int x = 15; x >= 8; x--) {
		for (int y = 31; y >=16; y--) {
					leds[XY(x, y)] = ColorFromPalette( currentPalette, sixteen_cells[i]);
					i++;
		}
	}
}

#endif /* FUNCTIONS_H_ */
