int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

// Store segment pins in an array for easier handling
int segments[7] = {a, b, c, d, e, f, g};

// Each digit's pattern (1 = ON, 0 = OFF)
// Order: a, b, c, d, e, f, g
byte digits[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1}  // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segments[i], OUTPUT);
  }
}

void displayDigit(int num) {
  for (int i = 0; i < 7; i++) {
    // Invert the logic for common anode (LOW = ON, HIGH = OFF)
    digitalWrite(segments[i], digits[num][i] ? LOW : HIGH);
  }
}

void loop() {
  for (int i = 0; i <= 9; i++) {
    displayDigit(i);
    delay(800);  // show each number for 0.8 seconds
  }
}