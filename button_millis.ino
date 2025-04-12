const int button = 8;
const int led = 9;

bool buttonState = false;  // Lưu trạng thái LED
bool beforbutton = HIGH;  // Trạng thái trước đó của nút
unsigned long time_end = 0;
const long cho = 50;  // 50ms chống nhiễu

void setup() {
  pinMode(button, INPUT_PULLUP);  // Kích hoạt pull-up để tránh nhiễu
  pinMode(led, OUTPUT);
}

void loop() {
  bool checkButton = digitalRead(button);

  if (checkButton != beforbutton) {
    time_end = millis();  // Cập nhật thời gian khi có thay đổi
  }

  if ((millis() - time_end) > cho) {
    if (checkButton == LOW) {  // Nút được nhấn (vì đang dùng INPUT_PULLUP)
      buttonState = !buttonState;  // Đảo trạng thái LED
      digitalWrite(led, buttonState);
    }
  }

  beforbutton = checkButton;
}
