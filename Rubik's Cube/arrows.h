/*Each arrow around the selected side of the cube is numbered.
The top left arrow is arrow1 and the other arrows are numbered by going clockwise from the first arrow.
Each arrow performs one of the 18 possible moves defined in moves.h, depending upon the side which is selected.*/

void arrow1 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[], int currentSide)
{
	switch (currentSide) 
	{
	case 1:
		{
			move1(top,bottom,leftt,rightt,front,back,swapp);
			display(top, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 2:
		{
			move1(top,bottom,leftt,rightt,front,back,swapp);
			display(bottom, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 3:
		{
			move13(top,bottom,leftt,rightt,front,back,swapp);
			display(leftt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 4:
		{
			move16(top,bottom,leftt,rightt,front,back,swapp);
			display(rightt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 5:
		{
			move1(top,bottom,leftt,rightt,front,back,swapp);
			display(front, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 6:
		{
			move7(top,bottom,leftt,rightt,front,back,swapp);
			display(back, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	}
}

void arrow2 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[], int currentSide)
{
	switch (currentSide) 
	{
	case 1:
		{
			move2(top,bottom,leftt,rightt,front,back,swapp);
			display(top, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 2:
		{
			move2(top,bottom,leftt,rightt,front,back,swapp);
			display(bottom, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 3:
		{
			move14(top,bottom,leftt,rightt,front,back,swapp);
			display(leftt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 4:
		{
			move17(top,bottom,leftt,rightt,front,back,swapp);
			display(rightt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 5:
		{
			move2(top,bottom,leftt,rightt,front,back,swapp);
			display(front, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 6:
		{
			move8(top,bottom,leftt,rightt,front,back,swapp);
			display(back, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	}
}

void arrow3 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[], int currentSide)
{
	switch (currentSide) 
	{
	case 1:
		{
			move3(top,bottom,leftt,rightt,front,back,swapp);
			display(top, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 2:
		{
			move3(top,bottom,leftt,rightt,front,back,swapp);
			display(bottom, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 3:
		{
			move15(top,bottom,leftt,rightt,front,back,swapp);
			display(leftt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 4:
		{
			move18(top,bottom,leftt,rightt,front,back,swapp);
			display(rightt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 5:
		{
			move3(top,bottom,leftt,rightt,front,back,swapp);
			display(front, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 6:
		{
			move9(top,bottom,leftt,rightt,front,back,swapp);
			display(back, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	}
}

void arrow4 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[], int currentSide)
{
	switch (currentSide) 
	{
	case 1:
		{
			move13(top,bottom,leftt,rightt,front,back,swapp);
			display(top, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 2:
		{
			move16(top,bottom,leftt,rightt,front,back,swapp);
			display(bottom, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 3:
		{
			move4(top,bottom,leftt,rightt,front,back,swapp);
			display(leftt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 4:
		{
			move4(top,bottom,leftt,rightt,front,back,swapp);
			display(rightt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 5:
		{
			move4(top,bottom,leftt,rightt,front,back,swapp);
			display(front, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 6:
		{
			move4(top,bottom,leftt,rightt,front,back,swapp);
			display(back, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	}
}

void arrow5 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[], int currentSide)
{
	switch (currentSide) 
	{
	case 1:
		{
			move14(top,bottom,leftt,rightt,front,back,swapp);
			display(top, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 2:
		{
			move17(top,bottom,leftt,rightt,front,back,swapp);
			display(bottom, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 3:
		{
			move5(top,bottom,leftt,rightt,front,back,swapp);
			display(leftt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 4:
		{
			move5(top,bottom,leftt,rightt,front,back,swapp);
			display(rightt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 5:
		{
			move5(top,bottom,leftt,rightt,front,back,swapp);
			display(front, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 6:
		{
			move5(top,bottom,leftt,rightt,front,back,swapp);
			display(back, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	}
}

void arrow6 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[], int currentSide)
{
	switch (currentSide) 
	{
	case 1:
		{
			move15(top,bottom,leftt,rightt,front,back,swapp);
			display(top, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 2:
		{
			move18(top,bottom,leftt,rightt,front,back,swapp);
			display(bottom, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 3:
		{
			move6(top,bottom,leftt,rightt,front,back,swapp);
			display(leftt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 4:
		{
			move6(top,bottom,leftt,rightt,front,back,swapp);
			display(rightt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 5:
		{
			move6(top,bottom,leftt,rightt,front,back,swapp);
			display(front, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 6:
		{
			move6(top,bottom,leftt,rightt,front,back,swapp);
			display(back, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	}
}

void arrow7 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[], int currentSide)
{
	switch (currentSide) 
	{
	case 1:
		{
			move7(top,bottom,leftt,rightt,front,back,swapp);
			display(top, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 2:
		{
			move7(top,bottom,leftt,rightt,front,back,swapp);
			display(bottom, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 3:
		{
			move16(top,bottom,leftt,rightt,front,back,swapp);
			display(leftt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 4:
		{
			move13(top,bottom,leftt,rightt,front,back,swapp);
			display(rightt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 5:
		{
			move7(top,bottom,leftt,rightt,front,back,swapp);
			display(front, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 6:
		{
			move1(top,bottom,leftt,rightt,front,back,swapp);
			display(back, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	}
}

void arrow8 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[], int currentSide)
{
	switch (currentSide) 
	{
	case 1:
		{
			move8(top,bottom,leftt,rightt,front,back,swapp);
			display(top, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 2:
		{
			move8(top,bottom,leftt,rightt,front,back,swapp);
			display(bottom, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 3:
		{
			move17(top,bottom,leftt,rightt,front,back,swapp);
			display(leftt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 4:
		{
			move14(top,bottom,leftt,rightt,front,back,swapp);
			display(rightt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 5:
		{
			move8(top,bottom,leftt,rightt,front,back,swapp);
			display(front, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 6:
		{
			move2(top,bottom,leftt,rightt,front,back,swapp);
			display(back, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	}
}

void arrow9 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[], int currentSide)
{
	switch (currentSide) 
	{
	case 1:
		{
			move9(top,bottom,leftt,rightt,front,back,swapp);
			display(top, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 2:
		{
			move9(top,bottom,leftt,rightt,front,back,swapp);
			display(bottom, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 3:
		{
			move18(top,bottom,leftt,rightt,front,back,swapp);
			display(leftt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 4:
		{
			move15(top,bottom,leftt,rightt,front,back,swapp);
			display(rightt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 5:
		{
			move9(top,bottom,leftt,rightt,front,back,swapp);
			display(front, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 6:
		{
			move3(top,bottom,leftt,rightt,front,back,swapp);
			display(back, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	}
}

void arrow10 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[], int currentSide)
{
	switch (currentSide) 
	{
	case 1:
		{
			move16(top,bottom,leftt,rightt,front,back,swapp);
			display(top, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 2:
		{
			move13(top,bottom,leftt,rightt,front,back,swapp);
			display(bottom, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 3:
		{
			move10(top,bottom,leftt,rightt,front,back,swapp);
			display(leftt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 4:
		{
			move10(top,bottom,leftt,rightt,front,back,swapp);
			display(rightt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 5:
		{
			move10(top,bottom,leftt,rightt,front,back,swapp);
			display(front, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 6:
		{
			move10(top,bottom,leftt,rightt,front,back,swapp);
			display(back, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	}
}

void arrow11 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[], int currentSide)
{
	switch (currentSide) 
	{
	case 1:
		{
			move17(top,bottom,leftt,rightt,front,back,swapp);
			display(top, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 2:
		{
			move14(top,bottom,leftt,rightt,front,back,swapp);
			display(bottom, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 3:
		{
			move11(top,bottom,leftt,rightt,front,back,swapp);
			display(leftt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 4:
		{
			move11(top,bottom,leftt,rightt,front,back,swapp);
			display(rightt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 5:
		{
			move11(top,bottom,leftt,rightt,front,back,swapp);
			display(front, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 6:
		{
			move11(top,bottom,leftt,rightt,front,back,swapp);
			display(back, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	}
}

void arrow12 (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[], int swapp[], int currentSide)
{
	switch (currentSide) 
	{
	case 1:
		{
			move18(top,bottom,leftt,rightt,front,back,swapp);
			display(top, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 2:
		{
			move15(top,bottom,leftt,rightt,front,back,swapp);
			display(bottom, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 3:
		{
			move12(top,bottom,leftt,rightt,front,back,swapp);
			display(leftt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 4:
		{
			move12(top,bottom,leftt,rightt,front,back,swapp);
			display(rightt, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 5:
		{
			move12(top,bottom,leftt,rightt,front,back,swapp);
			display(front, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	case 6:
		{
			move12(top,bottom,leftt,rightt,front,back,swapp);
			display(back, currentSide, top,bottom,leftt,rightt,front,back);
			break;
		}
	}
}
