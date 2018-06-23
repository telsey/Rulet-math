/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
ff
*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int
main ()
{
  float banka = 10000;
  float broj_igri = 0;
  float pocetni_ulog = 5;
  float ulozeno = 0, dobitak = 0;
  srand (time (NULL));

  float ulog_runda = pocetni_ulog;
  cout << "Pocetna banka = " << banka << endl;
  cout << "________________________________" << endl;
  cout << endl;

  while (true)
    {
      cout << "Start runde, ulog: " << ulog_runda << endl;
      banka -= ulog_runda;
      cout << "Start runde, banka: " << banka << endl;
      ulozeno += ulog_runda;

      int result = rand () % 2;	// random broj izmedu 0 i 1

      if (result == 0)
	{			// gubitak
	  banka -= ulog_runda;
	  cout << "Gubitak!!" << endl;
	}
      else
	{			// dobitak
	  banka += ulog_runda * 2;
	  cout << "Dobitak!!" << endl;
	}

      if (banka >= 12000)
	{
	  // dovoljno je
	  cout << "Zaradili ste 2000 kuna" << endl;
	  cout << "Odigrali ste " << broj_igri << " runda" << endl;
	  break;
	}

      if (banka <= ulog_runda)
	{
	  cout << "________________________________" << endl;
	  cout << "Ostali ste bez banke" << endl;
	  cout << "Odigrali ste " << broj_igri << " runda" << endl;
	  break;
	}

      ulog_runda *= 2;
      broj_igri++;
      cout << "Kraj runde banka =" << banka << endl;
      cout << "______________________________" << endl;

    }



  return 0;
}
