/*
Written By Zain-ul-Abideen
I have added to comments as a guide to understand my project.
P.S. Look at my note in "rubiks.h" to assign colors to individual squares for checking.
*/

#include <stdio.h>
#include <cstdlib>
#include <windows.h>
#include <time.h>
#include "graphics.h"
#include <stdlib.h>
#include "rubiks.h"
#include "moves.h"
#include "arrows.h"

int leftt[10] = {0};
int rightt[10] = {0};
int top[10] = {0};
int bottom[10] = {0};
int front[10] = {0};
int back[10] = {0};
int currentSide = 5;
int swapp[10] = {0};
int random = 0;

void displayCurrentSide (int currentSide)
{
	switch (currentSide)
	{
	case 1:
		display(top, 1, top,bottom,leftt,rightt,front,back);
		break;
	case 2:
		display(bottom, 2, top,bottom,leftt,rightt,front,back);
		break;
	case 3:
		display(leftt, 3, top,bottom,leftt,rightt,front,back);
		break;
	case 4:
		display(rightt, 4, top,bottom,leftt,rightt,front,back);
		break;
	case 5:
		display(front, 5, top,bottom,leftt,rightt,front,back);
		break;
	case 6:
		display(back, 6, top,bottom,leftt,rightt,front,back);
		break;
	}
}


int main (void)
{
	int x = 0, y = 0, color = 0;
	
	FreeConsole();	//Close the console window.
	clear(top,bottom,leftt,rightt,front,back);
	initwindow(400, 320, "Rubik's Cube",200, 100);	//Create graphics window.
	display(front, currentSide, top, bottom,leftt,rightt,front,back);

	while (1)
	{
		while (!ismouseclick(WM_LBUTTONDOWN))	//Proceed when left mouse button is clicked.		
		{
		}
		getmouseclick(WM_LBUTTONDOWN, x, y);	//Get coordinates of last left-click.

		color = getpixel(x, y);
		if (color == 14)
		{							/*Check which arrow is clicked*/
			if (x < 40)				//Left Arrows
			{
				if (y < 70)
					arrow12(top,bottom,leftt,rightt,front,back,swapp,currentSide);
				if (y > 106)
					arrow10(top,bottom,leftt,rightt,front,back,swapp,currentSide);
				if (y > 70 && y < 106)
					arrow11(top,bottom,leftt,rightt,front,back,swapp,currentSide);					
			}
			if (x > 136)			//Right Arrows
			{
				if (y < 70)
					arrow4(top,bottom,leftt,rightt,front,back,swapp,currentSide);
				if (y > 106)
					arrow6(top,bottom,leftt,rightt,front,back,swapp,currentSide);
				if (y > 70 && y < 106)
					arrow5(top,bottom,leftt,rightt,front,back,swapp,currentSide);					
			}
			if (y < 40)				//Up Arrows
			{
				if (x < 70)
					arrow1(top,bottom,leftt,rightt,front,back,swapp,currentSide);
				if (x > 106)
					arrow3(top,bottom,leftt,rightt,front,back,swapp,currentSide);
				if (x > 70 && x < 106)
					arrow2(top,bottom,leftt,rightt,front,back,swapp,currentSide);					
			}
			if (y > 136)			//Down Arrows
			{
				if (x < 70)
					arrow9(top,bottom,leftt,rightt,front,back,swapp,currentSide);
				if (x > 106)
					arrow7(top,bottom,leftt,rightt,front,back,swapp,currentSide);
				if (x > 70 && x < 106)
					arrow8(top,bottom,leftt,rightt,front,back,swapp,currentSide);					
			}
		}
		else						/*Check which side is clicked*/
		{
			if (y > 220 && y < 252 && x > 150 && x < 182)
			{
				currentSide = 5;
				display (front, currentSide, top,bottom,leftt,rightt,front,back);
			}
			if (y > 220 && y < 252 && x > 187 && x < 219)
			{
				currentSide = 4;
				display (rightt, currentSide, top,bottom,leftt,rightt,front,back);
			}			
			if (y > 220 && y < 252 && x > 113 && x < 145)
			{
				currentSide = 3;
				display (leftt, currentSide, top,bottom,leftt,rightt,front,back);
			}
			if (y > 220 && y < 252 && x > 76 && x < 108)
			{
				currentSide = 6;
				display (back, currentSide, top,bottom,leftt,rightt,front,back);
			}
			if (y > 257 && y < 289 && x > 150 && x < 182)
			{
				currentSide = 2;
				display (bottom, currentSide, top,bottom,leftt,rightt,front,back);
			}
			if (y > 183 && y < 215 && x > 150 && x < 182)
			{
				currentSide = 1;
				display (top, currentSide, top,bottom,leftt,rightt,front,back);
			}
			if (y > 40 && y < 75 && x > 200 && x < 370)
			{
				clear(top,bottom,leftt,rightt,front,back);
				displayCurrentSide(currentSide);
			}

			/*Randomize the cube by making 40 random legal moves.*/
			
			if (y > 95 && y < 130 && x > 200 && x < 370)
			{
				srand(time(NULL));
				for(int i = 1; i <=40; i++)
				{
					delay(1);
					random = (rand() %18)+1;
					switch (random)
					{
					case 1:
						move1(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 2:
						move2(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 3:
						move3(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 4:
						move4(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 5:
						move5(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 6:
						move6(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 7:
						move7(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 8:
						move8(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 9:
						move9(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 10:
						move10(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 11:
						move11(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 12:
						move12(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 13:
						move13(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 14:
						move14(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 15:
						move15(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 16:
						move16(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 17:
						move17(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					case 18:
						move18(top,bottom,leftt,rightt,front,back,swapp);
						displayCurrentSide(currentSide);
					}
				}
			}
		}
	}

	return 0;
}