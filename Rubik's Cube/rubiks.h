/*For checking, the following code can be used to assign colors to individual sqaures:

top[0] = 1
top[1] = 1
top[2] = 1
top[3] = 1
top[4] = 1
top[5] = 1
top[6] = 1
top[7] = 1
top[8] = 1

bottom[0] = 1
bottom[1] = 1
bottom[2] = 1
bottom[3] = 1
bottom[4] = 1
bottom[5] = 1
bottom[6] = 1
bottom[7] = 1
bottom[8] = 1

left[0] = 1
left[1] = 1
left[2] = 1
left[3] = 1
left[4] = 1
left[5] = 1
left[6] = 1
left[7] = 1
left[8] = 1

top[0] = 1
top[1] = 1
top[2] = 1
top[3] = 1
top[4] = 1
top[5] = 1
top[6] = 1
top[7] = 1
top[8] = 1

front[0] = 1
front[1] = 1
front[2] = 1
front[3] = 1
front[4] = 1
front[5] = 1
front[6] = 1
front[7] = 1
front[8] = 1

back[0] = 1
back[1] = 1
back[2] = 1
back[3] = 1
back[4] = 1
back[5] = 1
back[6] = 1
back[7] = 1
back[8] = 1

Colors
--------

1 = Dark Blue
2 = Green
3 = Light Blue
4 = Red
5 = Purple
6 = Yellow

Replace the code in the clear function with this code. The reset button will then set the colors of the cube as provided by you.
*/

void clear (int top[], int bottom[], int leftt[], int rightt[], int front[], int back[])
	
/*Resets the cube to solved form.*/

{
	for (int i = 0; i <= 9; i++)
	{
		top[i] = 1;
	}
	for (int i = 0; i <= 9; i++)
	{
		bottom[i] = 2;
	}
	for (int i = 0; i <= 9; i++)
	{
		leftt[i] = 3;
	}
	for (int i = 0; i <= 9; i++)
	{
		rightt[i] = 4;
	}
	for (int i = 0; i <= 9; i++)
	{
		front[i] = 5;
	}
	for (int i = 0; i <= 9; i++)
	{
		back[i] = 6;
	}
}

void printSide(int currentSide)
	/*Print the name of the side that is currently selected.*/
{
	settextstyle(9, HORIZ_DIR, 2);
	switch (currentSide)
	{
	case 1:
		{
			outtextxy(50, 175, "Top");
			break;
		}
	case 2:
		{
			outtextxy(50, 175, "Bottom");
			break;
		}
	case 3:
		{
			outtextxy(50, 175, "Left");
			break;
		}
	case 4:
		{
			outtextxy(50, 175, "Right");
			break;
		}
	case 5:
		{
			outtextxy(50, 175, "Front");
			break;
		}
	case 6:
		{
			outtextxy(50, 175, "Back");
			break;
		}
	}
}

void display (int side[], int currentSide, int top[], int bottom[], int leftt[], int rightt[], int front[], int back[])
	
/*This is the main display function. It clears the window and redraws everything after each user interaction.*/

{
	cleardevice(); //Clears the window

/*Draws the selected cube side that is supposed to have arrows around it.*/

	for (int i = 0; i <= 60; i=i+30)
	{
		for (int j = 0; j <= 60; j=j+30)
		{
			setfillstyle(1,side[(j/30) + 1 + (3*(i/30))]);
			bar(40+j+(j/10), 40+i+(i/10), 70+j+(j/10), 70+i+(i/10));
		}
	}

/*Draws the arrows around the selected cube side.*/

	setfillstyle(1, 14); //Yellow color
	int poly[8]={0};

	for (int i = 0; i<=66; i = i+33)
	{
		poly[0] = 30;        
		poly[1] = 45+i;
		poly[2] = 30;  
		poly[3] = 65+i;
		poly[4] = 15;
		poly[5] = 55+i;
		fillpoly(3, poly);
	}

	for (int i = 0; i<=66; i = i+33)
	{
		poly[0] = 146;        
		poly[1] = 45+i;
		poly[2] = 146;  
		poly[3] = 65+i;
		poly[4] = 161;
		poly[5] = 55+i;
		fillpoly(3, poly);
	}

	for (int i = 0; i<=66; i = i+33)
	{
		poly[1] = 146;        
		poly[0] = 45+i;
		poly[3] = 146;  
		poly[2] = 65+i;
		poly[5] = 161;
		poly[4] = 55+i;
		fillpoly(3, poly);
	}

	for (int i = 0; i<=66; i = i+33)
	{
		poly[1] = 30;        
		poly[0] = 45+i;
		poly[3] = 30;  
		poly[2] = 65+i;
		poly[5] = 15;
		poly[4] = 55+i;
		fillpoly(3, poly);
	}

/*Draws all the sides of the cube arranged as a simple net of a cube.*/

	for (int i = 0; i <= 20; i=i+10)
	{
		for (int j = 0; j <= 20; j=j+10)
		{
			setfillstyle(1,front[(j/10) + 1 + (3*(i/10))]);
			bar(150+j+(j/10), 220+i+(i/10), 160+j+(j/10), 230+i+(i/10));
		}
	}

	for (int i = 0; i <= 20; i=i+10)
	{
		for (int j = 0; j <= 20; j=j+10)
		{
			setfillstyle(1,rightt[(j/10) + 1 + (3*(i/10))]);
			bar(187+j+(j/10), 220+i+(i/10), 197+j+(j/10), 230+i+(i/10));
		}
	}

	for (int i = 0; i <= 20; i=i+10)
	{
		for (int j = 0; j <= 20; j=j+10)
		{
			setfillstyle(1,leftt[(j/10) + 1 + (3*(i/10))]);
			bar(113+j+(j/10), 220+i+(i/10), 123+j+(j/10), 230+i+(i/10));
		}
	}

	for (int i = 0; i <= 20; i=i+10)
	{
		for (int j = 0; j <= 20; j=j+10)
		{
			setfillstyle(1,back[(j/10) + 1 + (3*(i/10))]);
			bar(76+j+(j/10), 220+i+(i/10), 86+j+(j/10), 230+i+(i/10));
		}
	}

	for (int i = 0; i <= 20; i=i+10)
	{
		for (int j = 0; j <= 20; j=j+10)
		{
			setfillstyle(1,bottom[(j/10) + 1 + (3*(i/10))]);
			bar(150+j+(j/10), 257+i+(i/10), 160+j+(j/10), 267+i+(i/10));
		}
	}

	for (int i = 0; i <= 20; i=i+10)
	{
		for (int j = 0; j <= 20; j=j+10)
		{
			setfillstyle(1,top[(j/10) + 1 + (3*(i/10))]);
			bar(150+j+(j/10), 183+i+(i/10), 160+j+(j/10), 193+i+(i/10));
		}
	}

/*Draws the Randomize and Reset buttons.*/
		
	settextstyle(5, HORIZ_DIR, 4);
	outtextxy(245, 43, "Reset");
	outtextxy(203, 96, "Randomize");
	rectangle(200, 40, 370, 75);
	rectangle(200, 95, 370, 130);
	
	settextstyle(8, HORIZ_DIR, 1);
	outtextxy(240, 180, "Click on a");
	outtextxy(240, 200, "side to");
	outtextxy(240, 220, "select it.");
	outtextxy(240, 240, "Use arrows");
	outtextxy(240, 260, "to rotate.");
	outtextxy(120, 290, "Made By Zain-Ul-Abideen");


	printSide(currentSide);
}