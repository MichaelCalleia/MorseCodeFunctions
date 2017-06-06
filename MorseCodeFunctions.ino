/*
 * Morse Code uses dots and dashes to communicate with 
 * signals that can be sent using sound or light.
 * 
 * This sketch contains functions for: all of the letters 
 * in the alphabet, some accented letters, the numbers 0–9 
 * and Procedural Signals (prosigns) for formatting, using Morse Code.
 *
 * You can use a Piezo Buzzer, LED or both
 * 
 * You can use this Sketch to create your own Morse Code communicator.
 * 
 * There are options below to use a piezo buzzer or an LED.
 * 
 * v. 1.0.1
 * 2017 Lily + Michael Calleia
 * CC-BY-SA 3.0
 * 
 */


// Let's declare some useful variables
int pin = 13;             // The pin that the piezo buzzer and/or LED is attached to
int freq = 100;           // Sets the frequency if you are using a piezo ( Uno, Mega, Leonardo and other AVR boards 31–65535, Zero 41—275000); set to 0 to use an LED with no buzzer
int unit = 250;           // The duration of all dots, dashes and spaces in Morse Code are based on a Unit


// The setup, which runs only once
void setup()
{
  pinMode( pin, OUTPUT) ;  // setsup your pin
}


// The loop, which will run until power is removed or reset is press
void loop()
{

  /* 
   Add your message below, adding a function for each letter and space.
   Note: there are letter spaces Lspace(); and word spaces Wspace();
  
   Below is an exmple of Hello World!
    
  */

   h();
     Lspace();
   e();
    Lspace();
   l();
     Lspace();
   l();
     Lspace();
   o();
     Wspace();
   w();
     Lspace();
   o();
     Lspace();
   r();
     Lspace();
   l();
     Lspace();
   d();
     Lspace();
   exclamation(); // See below for punction marks
     Wspace();
   AR();  // Prosign for End of Message. See below for Prosigns
     Wspace();
     Wspace();
     Wspace();
 
 }


/* 
 The functions that make this Sketch work 
*/

  // Buidling blocks of Morse Code
  
    // A dot (also called a dit)  is one unit
    void dot()
    {
      if ( freq == 0 ) {
        // Use this code if you are using a peizo buzzer
        tone( pin, freq );
        delay( unit );
        noTone( pin );
       } else {
        // Use this code if you are using an LED
        digitalWrite( pin, HIGH);
        delay( unit );
        digitalWrite( pin, LOW);
       }
    } 
    
    // A dash (also called a dah) is three units
    void dash()
    {
       if ( freq == 0 ) {
        // Use this code if you are using a peizo buzzer
        tone( pin, freq );
        delay( unit*3 );
        noTone( pin );
       } else {
        // Use this code if you are using an LED
        digitalWrite( pin, HIGH);
        delay( unit*3 );
        digitalWrite( pin, LOW);
       }
    } 

    // A space between dots or dashes within a letter are one unit
    void Dspace()
    {
     delay( unit );
    }
    
    // A space between two letters is three units
    void Lspace()
    {
     delay( unit*3 );
    }
    
    // A space between two words is seven units
    void Wspace()
    {
     delay( unit*7 );
    }
    
  
  // Letters of the alphabet

    // A
    void a()
    {
      dot();
        Dspace();
      dash();
    }
    
    // B
    void b()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }
    
    // C
    void c()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }
    
    // D
    void d()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
    }
    
    // E
    void e()
    {
      dot();
    }
    
    // F
    void f()
    { 
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }
    
    // G
    void g()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }
    
    // H
    void h()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // I
    void i()
    {
      dot();
        Dspace();
      dot();
    }

    // J
    void j()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // K
    void k()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }
 
    // L
    void l()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // M
    void m()
    {
      dash();
        Dspace();
      dash();
    }
 
    // N
    void n()
    {
      dash();
        Dspace();
      dot();
    }

    // O
    void o()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // P
    void p()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Q
    void q()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // R
    void r()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // S
    void s()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // T
    void t()
    {
      dash();
    }

    // U
    void u()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // V
    void v()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // W
    void w()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // X
    void x()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // Y
    void y()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
    }


    // Z
    void z()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
    }


  // Accented letters

    // Ä - A with an umlaut mark or diaeresis.
    void aUmlaut()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // Å, À - A with a ring or angstrom, À with a grave accent
    void aRing()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // Ch - ch digraph.
    void chDigraph()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }
    
    // É - E with an acute accent.
    void eAcute()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // Ñ, Ń - N with a virgulilla, and N with acute accent.
    void nVirgulilla()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // Ö - O with an umlaut mark or diaeresis.
    void oUmlaut()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Ü - U with an umlaut mark or diaeresis.
    void uUmlaut()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // add more accented letters here.

  
  // Nubers 0-9

    void n0()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }
    
    void n1()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }
    
    void n2()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }
    
    void n3()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
    }
    
    void n4()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
    }
    
    void n5()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }
    
    void n6()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }
    
    void n7()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }
    
    void n8()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
    }
    
    void n9()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }


  // Punctuation and symbols

    // Period .
    void period()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }
 
    // Comma ,
    void comma()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
    }
  
    // Question Mark ?
    void questionMark()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // Apostrophe '
    void apostrophe()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Exclamation Point !
    void exclamation()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      d();
    }

    // Slash/Fraction Bar /
    void slash()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Parenthesis-Open (
    void parenthesisOpen()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Parenthesis-Close )
    void parenthesisClose()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Ampersand &
    void ampersand()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // Colon :
    void colon()
    {
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // Semicolon ;
    void semicolon()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
         Dspace();
      dot();
   }

    // Equal sign-Double Dash =
    void equalSign()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // Plus sign +
    void plusSign()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // Minus Sign, Hyphen -
    void minusSign()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
         Dspace();
      dash();
   }

    // Underscore _
    void underscore()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
         Dspace();
      dash();
   }

    // Quotation mark "
    void quotationMark()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
         Dspace();
      dot();
   }

    // Dollar sign $
    void dollarSign()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
         Dspace();
      dot();
        Dspace();
      dash();
   }

    // At Sign @
    void atSign()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }


  /* 
   *  
   *  Procedural signals (also called Prosigns)
   *  
   *    Morse code prosigns or procedural signals 
   *    are dot/dash sequence symbols that do not 
   *    represent written characters, but instead 
   *    are used to manage transmission and 
   *    formatting of messages.
   *    Sourse: https://en.wikipedia.org/wiki/Prosigns_for_Morse_code
   *    
   */

    // AA - New Line (space down one line)
    void AA()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // AR - End of message
    void AR()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // AS - Wait
    void AS()
    {
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // BT - New Paragraph (space down two lines)
    void BT()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // CT - Attention
    void CT()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // HH - Error 
    void HH()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }

    // K - Invitation for any station to transmit, as in "OK, go ahead"
    // Note this is just the letter k.

    // KN - Invitation for named station to transmit  
    void KN()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // NJ - Shift to Wabun code (used to send Japanese text)
    void NJ()
    {
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
    }

    // SK - End of contact
    void SK()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dash();
    }

    // SN - Understood
    void SN()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dot();
    }

    // SOS - International distress signal
    void SOS()
    {
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dash();
        Dspace();
      dot();
        Dspace();
      dot();
        Dspace();
      dot();
    }
