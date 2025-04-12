unsigned long time;
byte led[] = {8, 9, 10, 11, 12};
int temp = 0; 

void setup()
{
    time = millis();
    for (int i = 0; i < sizeof(led) / sizeof(led[0]); i++) {    // cau truc nay dung de tinh so phan tu theo cong thuc
        pinMode(led[i], OUTPUT);
        digitalWrite(led[i], LOW); // Tắt tất cả LED ban đầu
    }
}

void loop() 
{
    if ((unsigned long)(millis() - time) > 300) 
    {
        digitalWrite(led[temp], LOW);
        temp++;
        if (temp >= sizeof(led) / sizeof(led[0])) {
            temp = 0; // Quay lại LED đầu tiên nếu đã đến cuối mảng
        }
        digitalWrite(led[temp], HIGH);
        time = millis();
    }
}
