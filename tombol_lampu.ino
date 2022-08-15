// constants pin yang digunakan
int ledPin=11;            // Pin untuk LED
int tblPin=2;             /// Pin untuk tombol

volatile int status = LOW; // variabel akan berubah

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);   // inisialisasi pin LED sebagai output
  pinMode(tblPin,INPUT);	// inisialisasi pin tombol sebagai input
}

void loop()
{
  if(digitalRead(tblPin)==LOW)          // variabel untuk membaca status tombol tekan
  {
    delay(10);                        //Delay 10ms
    if(digitalRead(tblPin)==LOW)        // periksa apakah tombol ditekan. Jika ya, status tombolnya LOW
    {
      while(digitalRead(tblPin)==LOW);	//Tunggu status tombol menjadi LOW
      delay(10);   
      while(digitalRead(tblPin)==LOW);   //Konfirmasi tombol ditekan
      status = !status;                 // Operasi kebalikan, bila status HGIH menjadi LOW, atau kebalikannya.
      digitalWrite(ledPin,status);     //Output status kontrol LED, ON atau OFF
    }
  }
}
