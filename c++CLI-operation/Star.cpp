#include"Star.h"

void Star::Draw() {
	/*
		*
	   ***
	  *****
	 *******
	*********
   ***********
  *************
	*/
	for (int i = 1; i <= 7; i++) {		//五角星上面的一个角
		for (int j = 1; j < 19-i; j++) {		//空格
			Console::Write(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) {
			Console::Write("*");
		}
		Console::WriteLine();
	}
	//五角星中间的两个角
	/*
************************************
   ******************************
      ************************
         ******************
	*/
	for (int i = 1; i <5; i++) {
		for (int j = 1; j <= 3 * i - 3; j++) {
			Console::Write(" ");
		}
		for (int k = 1; k <= 42 - 6 * i; k++) {
			Console::Write("*");
		}
		Console::WriteLine();
	}
	//五角星中间和下部连接的部分
	/*
	      **************
         ****************
	*/
	for (int i = 1; i < 3; i++) {
		for (int j = 1; j < 12 - i; j++) {
			Console::Write(" ");
		}
		for (int k = 1; k <= 12 + 2 * i; k++) {
			Console::Write("*");
		}
		Console::WriteLine();
	}
	//五角星下面两个角
	
	/*
	    ********  ********
       ******        ******
      ****              ****
     **                    **
	
	
	*/
	for (int i = 1; i <= 4; i++) {
		for (int j=1; j < 10 - i; j++) {
			Console::Write(" ");
		}
		for (int k = 1; k <= 10 - 2 * i; k++) {
			Console::Write("*");
		}
		for (int m = 1; m < 6 * i - 3; m++) {
			Console::Write(" ");
		}
		for (int n = 1; n <= 10 - 2 * i; n++) {
			Console::Write("*");
		}
		Console::WriteLine();
	}
}

Star::Star() {};
