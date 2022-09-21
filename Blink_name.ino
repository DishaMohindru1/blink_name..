

// the setup function runs once when you press reset or power the board
void setup() 
{
  // initialize digital pin 12 as an output.
  pinMode(12, OUTPUT);
}
void dot()           //when the dot function is called then there is delay of only one second in both glowing and fading 
{
  digitalWrite(12, HIGH);     //led glows
  delay(1000);
  digitalWrite(12, LOW);      //led fades
  delay(1000);
}

void dash()             //when the dash function is called then the led glows for 3 seconds and fades out for one second.
{
  digitalWrite(12, HIGH);        //led glows 
  delay(3000);
  digitalWrite(12, LOW);            //led fades
  delay(1000);
}

void char_a()
{
   dot();
   dash();
}

void char_b()
{
  dash();
  dot();
  dot();
  dot();
}
void char_c()
{
  dash();
  dot();
  dash();
  dot();
}

void char_d()
{
  dash();
  dot();
  dot();
}
void char_e()
{
  dot();
}
void char_f()
{
  dot();
  dot();
  dash();
  dot();
}
void char_g()
{
  dash();
  dash();
  dot();
}

void char_h()
{
  dot();
  dot();
  dot();
  dot();
}
void char_i()
{
  dot();
  dot();
}

void char_j()
{
  dot();
  dash();
  dash();
  dash();
}
void char_k()
{
  dash();
  dot();
  dash();
}

void char_l()
{
  dot();
  dash();
  dot();
  dot();
}

char_m()
{
  dash();
  dash();
}

char_n()
{
  dash();
  dot();
}
char_o()
{
  dash();
  dash();
  dash();
}
char_p()
{
  dot();
  dash();
  dash();
  dot();
}
char_q()
{
  dash();
  dash();
  dot();
  dash();
}

void_r()
{
  dot();
  dash();
  dot();
}

void char_s()
{
  dot();
  dot();
  dot();
}

void char_t()
{
  dash();
}
void char_u
{
  dot();
  dot();
  dash();
}
void char_v()
{
  dot();
  dot();
  dot();
  dash();
}

void char_w()
{
  dot();
  dash();
  dash();
}

void char_x()
{ 
  dash();
  dot();
  dot();
  dash();
}

void char_y()
{ 
  dash();
  dot();
  dash();
  dash();
}

void char_y()
{ 
  dash();
  dash();
  dot();
  dot();
}


// the loop function runs over and over again forever
void loop() {
  // This is the morse code for my name 'Disha'
  void char_d();
  void char_i();
  void char_s();
  void char_h();
  void char_a();

 void char_m();
  void char_o();
  void char_h();
  void char_i();
  void char_n();
  void char_d();
  void char_r();
  void char_u();
  
}
