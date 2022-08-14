// constants pin yang digunakan
const int tombolPin = 2;     // Pin untuk tombol
const int ledPin =  13;      // Pin untuk LED

// variabel akan berubah:
int statusTombol = 0;         // variabel untuk membaca status tombol tekan

void setup() {
  // inisialisasi pin LED sebagai output:
  pinMode(ledPin, OUTPUT);
  // inisialisasi pin tombol sebagai input:
  pinMode(tombolPin, INPUT);
}

void loop() {
  // membaca status nilai tekan tombol :
  buttonState = digitalRead(buttonPin);

  // periksa apakah tombol ditekan. Jika ya, status tombolnya HIGH:
  if (statusTombol == HIGH) {
    // LED menyala:
    digitalWrite(ledPin, HIGH);
  } else {
    // LED mati:
    digitalWrite(ledPin, LOW);
  }
}
