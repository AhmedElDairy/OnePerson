// oneperson.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <glut.h>
#include "imageloader.h"
#include <iostream>
#include "glaux.h"
#include <stdlib.h>
#include <math.h>
#pragma comment(lib, "winmm.lib")
//angle of rotation
//using namespace std;
static int counter=0;
static int checker=0;
static int lol=0;
static int helper=0;
bool mat=false;
bool chooser=false;
bool winner = false;
int chooser2=0;
float chooser3=0;
int afterchoosing=0;
float xpos = 0, ypos = 0, zpos = 0, xrot = 12.0, yrot = 0, angle=0.0;
int x1;
int x2;
int z1;
int z2;
static int test=0;
static int wincount=0;
bool checkcount=true;
bool tester=true;
int coorNum=0;
static int win1=30;
static int win2=90;
static int xa=-2000,xb=-2000,xc=-2000,xd=-2000,xe=-2000;
static int za=-2000,zb=-2000,zc=-2000,zd=-2000,ze=-2000;
static int bonus=0;

static int a1=-2000,a2=-2000,a3=-2000,a4=-2000,a5=-2000,a6=-2000,a7=-2000,a8=-2000,a9=-2000,a10=-2000;
static int b1=-2000,b2=-2000,b3=-2000,b4=-2000,b5=-2000,b6=-2000,b7=-2000,b8=-2000,b9=-2000,b10=-2000;
static int a11=-2000,a12=-2000,a13=-2000,a14=-2000,a15=-2000,a16=-2000,a17=-2000,a18=-2000,a19=-2000,a20=-2000;
static int b11=-2000,b12=-2000,b13=-2000,b14=-2000,b15=-2000,b16=-2000,b17=-2000,b18=-2000,b19=-2000,b20=-2000;


static GLfloat w=1.0;

float cRadius = 10.0f; // our radius distance from our character
int coordinates [2500] [4];

float lastx, lasty;

//positions of the cubes
float positionz[10];
float positionx[10];
GLuint _textureId;
GLuint _textureId1;
GLuint _textureId2;
GLuint _textureId3;
GLuint _textureId4;
GLuint _textureIddd;
GLuint _textureIdddd;
GLuint _textureIddddd;
GLuint _textureIddddd2;
GLuint _textureId10;
GLuint _textureId9;
GLuint _textureId8;
GLuint _textureId7;
GLuint _textureId6;
GLuint _textureId5;
GLuint _textureIdbon;
GLuint _textureIdeasy;
GLuint _textureIdnormal;
GLuint _textureIdhard;
GLuint _textureIdlast;
GLuint _textureIdhelp;
void draw_help(){

	glBegin(GL_QUADS);
    glColor4f(1.0,1.0,1.0,1.0);	
	

		glTexCoord2f(1.0f, 0.0f);	
	glVertex3f(1.0f,1.0f,1.0f);

	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-1.0f,1.0f,1.0f);

	
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-1.0f,3.0f,1.0f);

		glTexCoord2f(1.0f, 1.0f);
	glVertex3f(1.0f,3.0f,1.0f);



	glEnd();
}



void draw_cube()
{ 
	glBegin(GL_QUADS);
//	
    glColor4f(1.0,1.0,1.0,w);	
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(1.0f,0.0f,-1.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(1.0f,2.0f,-1.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(1.0f,2.0f,1.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(1.0f,0.0f,1.0f);
//
  //  glColor4f(1.0,1.0,1.0,0.5);	
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-1.0f,0.0f,1.0f);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(-1.0f,2.0f,1.0f);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(-1.0f,2.0f,-1.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-1.0f,0.0f,-1.0f);
//

   // glColor4f(g_color[0]);	
    glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-1.0f,2.0f,1.0f);
    glTexCoord2f(1.0f, 0.0f);
	glVertex3f(-1.0f,0.0f,1.0f);
    glTexCoord2f(1.0f, 1.0f);
	glVertex3f(1.0f,0.0f,1.0f);
    glTexCoord2f(0.0f, 1.0f);
	glVertex3f(1.0f,2.0f,1.0f);

	//
    
	//glColor4f(g_color[0]);		
	glTexCoord2f(0.0f, 0.0f);   
	glVertex3f(-1.0f,2.0f,-1.0f);
	glTexCoord2f(1.0f, 0.0f);	
	glVertex3f(1.0f,2.0f,-1.0f);    
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(1.0f,0.0f,-1.0f);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-1.0f,0.0f,-1.0f);
//

  //glColor4f(g_color[0]);	
  glTexCoord2f(0.0f, 0.0f);
  glVertex3f(-1.0f,2.0f,-1.0f);
  glTexCoord2f(1.0f, 0.0f);
  glVertex3f(-1.0f,2.0f,1.0f);    
  glTexCoord2f(1.0f, 1.0f);
  glVertex3f(1.0f,2.0f,1.0f);
  glTexCoord2f(0.0f, 1.0f);
  glVertex3f(1.0f,2.0f,-1.0f);
  //
  
 // glColor4f(g_color[0]);	
  glTexCoord2f(0.0f, 0.0f);
  glVertex3f(-1.0f,0.0f,-1.0f);
  glTexCoord2f(1.0f, 0.0f);
  glVertex3f(1.0f,0.0f,-1.0f);
  glTexCoord2f(1.0f, 1.0f);
  glVertex3f(1.0f,0.0f,1.0f);
  glTexCoord2f(0.0f, 1.0f);
  glVertex3f(-1.0f,0.0f,1.0f);
  glEnd();

  }



void draw_bonus(int a, int b){

 glPushMatrix();
 glTranslated(a,0,b);
 draw_cube();
 glPopMatrix();

}

void drawKeys(int x,int z){
	glPushMatrix();
	glTranslated(x,0,z);
	draw_cube();
	glPopMatrix();

}
void easy(){
	xa=33;
	za=-35;
	xb=185;
zb=-110;
xc=95;
zc=-110;
xd=95;
zd=-130;
xe=65;
ze=-95;

a1= -131;a2= -157;a3= -49;a4= 74;a5= 121;a6= 6;a7= -128;a8= -147;a9= -99;a10= -99;a11= -171;
a12= -134;a13= -79;a14= -81;a15= -16;a16= -20;a17= -21;a18= -145;a19= -134;a20= -139;

b1= -34;b2= -76;b3= -66;b4= -39;b5= -49;b6= -63;b7= -37;b8= -48;b9= -65;b10= -80;b11= -80;b12= -155;
b13= -63;b14= -50;b15= -83;b16= -99;b17= -112;b18= -111;b19= -141;b20= -169;
}

void normal(){
	xa=0;
	za=-40;
	xb=0;
zb=-85;
xc=15;
zc=-150;
xd=35;
zd=-350;
xe=-40;
ze=-370;

a1= -131;
 a2= -157;
 a3= -49;
 a4= 74;
 a5= 121;
 b1= -34;
 b2= -76;
 b3= -66;
 b4= -39;
 b5= -49;

 a6= 20;
 a7= -128;
 a8= -147;
 a9= -99;
 b6= -63;
 b7= -37;
 b8= -48;
 b9= -65;

 a10= -99;
 a11= -171;
 a12= -134;
 a13= -79;
 a14= -81;
 a15= -16;
 b10= -80;
 b11= -80;
 b12= -155;
 b13= -63;
 b14= -50;
 b15= -83;

 a16= -20;
 a17= -21;
 a18= -145;
 a19= -134;
 a20= -139;
 b16= -99;
 b17= -112;
 b18= -111;
 b19= -141;
 b20= -169;

}
void hard(){
xa=0;
za=-85;
xb=-55;
zb=-215;
xc=0;
zc=-305;
xd=0;
zd=-440;
xe=-5;
ze=-665;

a1= -131;
 a2= -157;
 a3= -49;
 a4= 74;
 a5= 121;
 b1= -34;
 b2= -76;
 b3= -66;
 b4= -39;
 b5= -49;

 a6= 20;
 a7= -128;
 a8= -147;
 a9= -99;
 b6= -63;
 b7= -37;
 b8= -48;
 b9= -65;

 a10= -99;
 a11= -171;
 a12= -134;
 a13= -79;
 a14= -81;
 a15= -16;
 b10= -80;
 b11= -80;
 b12= -65;
 b13= -63;
 b14= -50;
 b15= -83;

 a16= -20;
 a17= -21;
 a18= -145;
 a19= -134;
 a20= -139;
 b16= -99;
 b17= -112;
 b18= -111;
 b19= -141;
 b20= -169;


}
void easy_normal_hard(){
	drawKeys(xa,za);
	drawKeys(xb,zb);
	drawKeys(xc,zc);
	drawKeys(xd,zd);
drawKeys(xe,ze);

}

void draw_bonus_enh(){
draw_bonus(a10,b10);
 draw_bonus(a1,b1);
 draw_bonus(a2,b2);
 draw_bonus(a3,b3);
 draw_bonus(a4,b4);
 draw_bonus(a5,b5);
 draw_bonus(a6,b6);
 draw_bonus(a7,b7);
 draw_bonus(a8,b8);
 draw_bonus(a9,b9);
 draw_bonus(a11,b11);
 draw_bonus(a12,b12);
 draw_bonus(a13,b13);
 draw_bonus(a14,b14);
 draw_bonus(a15,b15);
 draw_bonus(a16,b16);
 draw_bonus(a17,b17);
 draw_bonus(a18,b18);
 draw_bonus(a19,b19);
 draw_bonus(a20,b20);
}
void draw_base(){

	glPushMatrix();
	glScaled(0.5,0.5,0.5);
	glScaled(1,0.25,1);
	draw_cube();
	glPopMatrix();

}

void draw_body(){
	
	glPushMatrix();
	glTranslated(0, 0.25, 0);
	glScaled(0.7,0.8,0.5);
	glScaled(0.5, 1.25, 1);
	draw_cube();
	glPopMatrix();

}

void draw_head(){
	
	glPushMatrix();
	glTranslated(0, 2.25, 0);
	glScaled(0.5,0.5,0.5);
	glScaled(0.4, 0.5, 1);
	draw_cube();
	glPopMatrix();

}
void draw_right_arm(){

	glPushMatrix();
	glTranslated(0.5, 1.2, 0);
	glScaled(0.5,0.5,0.5);
	glScaled(0.25, 1, 1);
	draw_cube();
	glPopMatrix();

}

void draw_left_arm(){
	
	glPushMatrix();
	glTranslated(-0.5, 1.2, 0);
	glScaled(0.5,0.5,0.5);
	glScaled(0.25, 1, 1);
	draw_cube();
	glPopMatrix();

}
GLuint loadTexture(Image* image) {
	GLuint textureId;
	glGenTextures(1, &textureId); //Make room for our texture
	glBindTexture(GL_TEXTURE_2D, textureId); //Tell OpenGL which texture to edit
	//Map the image to the texture
	glTexImage2D(GL_TEXTURE_2D,                //Always GL_TEXTURE_2D
				 0,                            //0 for now
				 GL_RGB,                       //Format OpenGL uses for image
				 image->width, image->height,  //Width and height
				 0,                            //The border of the image
				 GL_RGB, //GL_RGB, because pixels are stored in RGB format
				 GL_UNSIGNED_BYTE, //GL_UNSIGNED_BYTE, because pixels are stored
				                   //as unsigned numbers
				 image->pixels);               //The actual pixel data
	return textureId; //Returns the id of the texture
}





void doors(){

	glColor3f(1.0f, 1.0f, 1.0f);	

	glBegin(GL_QUADS);
	
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f( 5, 0.0, win1);
	glTexCoord2f(-1.0f, 0.0f);
	glVertex3f( -5, 0.0, win1);
	glTexCoord2f(-1.0f, 1.0f);
	glVertex3f( -5, 5, win1);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f( 5, 5, win1);
	if(checkcount==true){
	coordinates[coorNum][0] = -5;//u3ta3deel
	coordinates[coorNum][1] = 5;//u3ta3deel
	coordinates[coorNum][2] = 30;//u3ta3deel
	coordinates[coorNum][3] = 30;//u3ta3deel
	coorNum++;}
	
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f( 5, 0.0, win2);
	glTexCoord2f(-1.0f, 0.0f);
	glVertex3f( -5, 0.0, win2);
	glTexCoord2f(-1.0f, 1.0f);
	glVertex3f( -5, 5, win2);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f( 5, 5, win2);
if(checkcount==true){
		coordinates[coorNum][0] = -5;//u3ta3deel
	coordinates[coorNum][1] = 5;//u3ta3deel
	coordinates[coorNum][2] = 90;//u3ta3deel
	coordinates[coorNum][3] = 90;//u3ta3deel
	coorNum++;
}
	glEnd();

}
void wall4(){



	glColor3f(1.0f, 1.0f, 1.0f);	

	glBegin(GL_QUADS);
	
	glTexCoord2f(0.0f, 6.0f);
	glVertex3f( 65*chooser3/2, 0.0, 30);
	glTexCoord2f(0.0f, -4.0f);
	glVertex3f( 65*chooser3/2, 0.0, -10*chooser3);
	glTexCoord2f(1.0f, -4.0f);
	glVertex3f( 65*chooser3/2, 5, -10*chooser3);
	glTexCoord2f(1.0f, 6.0f);
	glVertex3f( 65*chooser3/2, 5, 30);
if(checkcount==true){
	coordinates[coorNum][0] = 65*chooser3/2;//u3ta3deel
	coordinates[coorNum][1] = 65*chooser3/2;//u3ta3deel
	coordinates[coorNum][2] = -10*chooser3;//u3ta3deel
	coordinates[coorNum][3] = 30;//u3ta3deel
	coorNum++;}

	glTexCoord2f(0.0f, 6.0f);
	glVertex3f( -65*chooser3/2, 0.0, 30);
	glTexCoord2f(0.0f, -4.0f);
	glVertex3f( -65*chooser3/2, 0.0, -10*chooser3);
	glTexCoord2f(1.0f, -4.0f);
	glVertex3f( -65*chooser3/2, 5, -10*chooser3);
	glTexCoord2f(1.0f, 6.0f);
	glVertex3f( -65*chooser3/2, 5, 30);
if(checkcount==true){
	coordinates[coorNum][0] = -65*chooser3/2;//u3ta3deel
	coordinates[coorNum][1] = -65*chooser3/2;//u3ta3deel
	coordinates[coorNum][2] = -10*chooser3;//u3ta3deel
	coordinates[coorNum][3] = 30;//u3ta3deel
	coorNum++;}

	glTexCoord2f(-13.0f, 0.0f);
	glVertex3f( -165, 0.0, 30);
	glTexCoord2f(-1.0f, 0.0f);
	glVertex3f( -5, 0.0, 30);
	glTexCoord2f(-1.0f, 1.0f);
	glVertex3f( -5, 5, 30);
	glTexCoord2f(-13.0f, 1.0f);
	glVertex3f( -165, 5, 30);
	if(checkcount==true){
	coordinates[coorNum][0] = -165;//u3ta3deel
	coordinates[coorNum][1] = -5;//u3ta3deel
	coordinates[coorNum][2] = 30;//u3ta3deel
	coordinates[coorNum][3] = 30;//u3ta3deel
	coorNum++;}

	glTexCoord2f(1.0f, 0.0f);
	glVertex3f( 5, 0.0, 30);
	glTexCoord2f(13.0f, 0.0f);
	glVertex3f( 165, 0.0, 30);
	glTexCoord2f(13.0f, 1.0f);
	glVertex3f( 165, 5, 30);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f( 5, 5, 30);
if(checkcount==true){
	coordinates[coorNum][0] = 5;//u3ta3deel
	coordinates[coorNum][1] = 165;//u3ta3deel
	coordinates[coorNum][2] = 30;//u3ta3deel
	coordinates[coorNum][3] = 30;//u3ta3deel
	coorNum++;}

	glTexCoord2f(0.0f, 18.0f);
	glVertex3f( 5, 0.0, 90);
	glTexCoord2f(0.0f, 6.0f);
	glVertex3f( 5, 0.0, 30);
	glTexCoord2f(1.0f, 6.0f);
	glVertex3f( 5, 5, 30);
	glTexCoord2f(1.0f, 18.0f);
	glVertex3f( 5, 5, 90);
			if(checkcount==true){
	coordinates[coorNum][0] = 5;//u3ta3deel
	coordinates[coorNum][1] = 5;//u3ta3deel
	coordinates[coorNum][2] = 30;//u3ta3deel
	coordinates[coorNum][3] = 90;//u3ta3deel
	coorNum++;}

	glTexCoord2f(0.0f, 18.0f);
	glVertex3f( -5, 0.0, 90);
	glTexCoord2f(0.0f, 6.0f);
	glVertex3f( -5, 0.0, 30);
	glTexCoord2f(1.0f, 6.0f);
	glVertex3f( -5, 5, 30);
	glTexCoord2f(1.0f, 18.0f);
	glVertex3f( -5, 5, 90);
if(checkcount==true){
	coordinates[coorNum][0] = -5;//u3ta3deel
	coordinates[coorNum][1] = -5;//u3ta3deel
	coordinates[coorNum][2] = 30;//u3ta3deel
	coordinates[coorNum][3] = 90;//u3ta3deel
	coorNum++;}

	glEnd();	
}

void wallhorsmall(int x,int y,int z){
glPushMatrix();	
glTranslatef(x,y,z);
glBegin(GL_QUADS);
//face in yz plane//xy
glColor3f(1, 1, 1);
	glTexCoord2f(0.0f, 0.0f);
glVertex3f(0, 0, 0);
	glTexCoord2f(0.0f, 1.0f);
glVertex3f(0, 5, 0);
	glTexCoord2f(-1.0f, 1.0f);
glVertex3f(-5, 5,0 );
	glTexCoord2f(-1.0f, 0.0f);
glVertex3f(-5, 0, 0);
if(checkcount==true){
	coordinates[coorNum][0] = (-5+x);//u3ta3deel
	coordinates[coorNum][1] = (0+x);//u3ta3deel
	coordinates[coorNum][2] = (0+z);//u3ta3deel
	coordinates[coorNum][3] = (0+z);//u3ta3deel
	coorNum++;
}
glEnd();

glPopMatrix();		}

void wallversmall(int x,int y, int z){
glPushMatrix();	
glTranslatef(x,y,z);
glBegin(GL_QUADS);
//face in yz plane //zy
glColor3f(1, 1, 1);
glTexCoord2f(0.0f, 1.0f);
glVertex3f(0, 0, 5);
glTexCoord2f(1.0f, 1.0f);
glVertex3f(0, 5, 5);
glTexCoord2f(1.0f, 0.0f);
glVertex3f(0, 5,0);
glTexCoord2f(0.0f, 0.0f);
glVertex3f(0, 0, 0);
glEnd();
glPopMatrix();
if(checkcount==true){
coordinates[coorNum][0] = (0+x);//u3ta3deel
	coordinates[coorNum][1] = (0+x);//u3ta3deel
	coordinates[coorNum][2] = (0+z);//u3ta3deel
	coordinates[coorNum][3] = (5+z);//u3ta3deel
	coorNum++;
}}

//----->horizontal
void wallhor(int x,int y, int z){
glPushMatrix();	
glTranslatef(x,y,z);
glBegin(GL_QUADS);
//face in yz plane
glColor3f(1, 1, 1);
glTexCoord2f(0.0f, 0.0f);
glVertex3f(0, 0, 0);
glTexCoord2f(0.0f, 1.0f);
glVertex3f(0, 5, 0);
glTexCoord2f(-12.0f, 1.0f);
glVertex3f(-60, 5,0 );
glTexCoord2f(-12.0f, 0.0f);
glVertex3f(-60, 0, 0);
glEnd();
glPopMatrix();
if(checkcount==true){
coordinates[coorNum][0] = (-60+x);//u3ta3deel
	coordinates[coorNum][1] = (0+x);//u3ta3deel
	coordinates[coorNum][2] = (0+z);//u3ta3deel
	coordinates[coorNum][3] = (0+z);//u3ta3deel
	coorNum++;
}}


void wallver(int x,int y, int z){
glPushMatrix();	
glTranslatef(x,y,z);
glBegin(GL_QUADS);
//face in yz plane
glColor3f(1, 1, 1);
glTexCoord2f(0.0f, 18.0f);
glVertex3f(0, 0, 90);
glTexCoord2f(1.0f, 18.0f);
glVertex3f(0, 5, 90);
glTexCoord2f(1.0f, -11.0f);
glVertex3f(0, 5,-55 );
glTexCoord2f(0.0f, -11.0f);
glVertex3f(0, 0, -55);
glEnd();
glPopMatrix();
if(checkcount==true){
coordinates[coorNum][0] = (0+x);//u3ta3deel
	coordinates[coorNum][1] = (0+x);//u3ta3deel
	coordinates[coorNum][2] = (-55+z);//u3ta3deel
	coordinates[coorNum][3] = (90+z);//u3ta3deel
	coorNum++;
}}


void endway(){
	if (chooser2==1){
		glScaled(chooser3,1,chooser3);
		wallhorsmall(5,0,-155);
	}	
	
	if (chooser2==3){
		glScaled(chooser3,1,chooser3);
		wallhorsmall(5,0,-145*5);
	}
	if (chooser2==2){
		glScaled(chooser3,1,chooser3);
		wallhorsmall(5,0,-150*2);
	}

}
void draw_onemaze(){
int i=25;
//horizontally
	wallhor(0,0,0);
		
	wallhor(65,0,0);
	wallhor(0,0,-145);
	wallhor(65,0,-145);
//vertically
    wallver(-60,0,-90);
	wallver(65,0,-90);
//mzae
	//---->1	
	wallhorsmall(-55,0,-5);
	//wallhorsmall(-50,0,-5);
	wallhorsmall(-45,0,-5);
	wallhorsmall(-40,0,-5);
	wallhorsmall(-35,0,-5);
	wallhorsmall(-30,0,-5);
	//wallhorsmall(-25,0,-5);
    wallhorsmall(-20,0,-5);
	wallhorsmall(-15,0,-5);
	wallhorsmall(-10,0,-5);
	wallhorsmall(-5,0,-5);
	wallhorsmall(0,0,-5);
	wallhorsmall(5,0,-5);
	wallhorsmall(10,0,-5);
	wallhorsmall(15,0,-5);
	wallhorsmall(20,0,-5);
	wallhorsmall(25,0,-5);
	wallhorsmall(30,0,-5);
    wallhorsmall(35,0,-5);
	wallhorsmall(40,0,-5);
	wallhorsmall(45,0,-5);
    wallhorsmall(50,0,-5);
    wallhorsmall(55,0,-5);
    wallhorsmall(60,0,-5);
    //wallhorsmall(65,0,-5);
    //---->2	
	wallhorsmall(-55,0,-10);
	//wallhorsmall(-50,0,-10);
	wallhorsmall(-45,0,-10);
	wallhorsmall(-40,0,-10);
	wallhorsmall(-35,0,-10);
	wallhorsmall(-30,0,-10);
	wallhorsmall(-25,0,-10);
    wallhorsmall(-20,0,-10);
	wallhorsmall(-15,0,-10);
	wallhorsmall(-10,0,-10);
	//wallhorsmall(-5,0,-10);
	//wallhorsmall(0,0,-10);
	//wallhorsmall(5,0,-10);
	//wallhorsmall(10,0,-10);
	//wallhorsmall(15,0,-10);
	/*wallhorsmall(20,0,-10);
	wallhorsmall(25,0,-10);
	wallhorsmall(30,0,-10);
    wallhorsmall(35,0,-10);
	wallhorsmall(40,0,-10);
	wallhorsmall(45,0,-10);
    wallhorsmall(50,0,-10);
    wallhorsmall(55,0,-10);
    wallhorsmall(60,0,-10);
    wallhorsmall(65,0,-10);*/

	//---->3	
//	wallhorsmall(-55,0,-15);
	//wallhorsmall(-50,0,-15);
	wallhorsmall(-45,0,-15);
	wallhorsmall(-40,0,-15);
	wallhorsmall(-35,0,-15);
	wallhorsmall(-30,0,-15);
	wallhorsmall(-25,0,-15);
    wallhorsmall(-20,0,-15);
	wallhorsmall(-15,0,-15);
	wallhorsmall(-10,0,-15);
	wallhorsmall(-5,0,-15);
	wallhorsmall(0,0,-15);
	wallhorsmall(5,0,-15);
	wallhorsmall(10,0,-15);
	wallhorsmall(15,0,-15);
	wallhorsmall(20,0,-15);
	wallhorsmall(25,0,-15);
	wallhorsmall(30,0,-15);
    wallhorsmall(35,0,-15);
	wallhorsmall(40,0,-15);
	wallhorsmall(45,0,-15);
    wallhorsmall(50,0,-15);
    wallhorsmall(55,0,-15);
    //wallhorsmall(60,0,-15);
    //wallhorsmall(65,0,-15);

	//---->4		
	//wallhorsmall(-55,0,-20);
	wallhorsmall(-50,0,-20);
	wallhorsmall(-45,0,-20);
	wallhorsmall(-40,0,-20);
	wallhorsmall(-35,0,-20);
	wallhorsmall(-30,0,-20);
	wallhorsmall(-25,0,-20);
    wallhorsmall(-20,0,-20);
	wallhorsmall(-15,0,-20);
	wallhorsmall(-10,0,-20);
	wallhorsmall(-5,0,-20);
	wallhorsmall(0,0,-20);
	wallhorsmall(5,0,-20);
	wallhorsmall(10,0,-20);
	wallhorsmall(15,0,-20);
	wallhorsmall(20,0,-20);
	wallhorsmall(25,0,-20);
	wallhorsmall(30,0,-20);
    wallhorsmall(35,0,-20);
	wallhorsmall(40,0,-20);
	wallhorsmall(45,0,-20);
    wallhorsmall(50,0,-20);
    //wallhorsmall(55,0,-20);
    //wallhorsmall(60,0,-20);
   // wallhorsmall(65,0,-20);

//---->5	
	wallhorsmall(-55,0,-25);
	wallhorsmall(-50,0,-25);
	wallhorsmall(-45,0,-25);
	wallhorsmall(-40,0,-25);
	wallhorsmall(-35,0,-25);
	wallhorsmall(-30,0,-25);
	wallhorsmall(-25,0,-25);
    wallhorsmall(-20,0,-25);
	wallhorsmall(-15,0,-25);
	//wallhorsmall(-10,0,-25);
	wallhorsmall(-5,0,-25);
	wallhorsmall(0,0,-25);
	wallhorsmall(5,0,-25);
	wallhorsmall(10,0,-25);
	wallhorsmall(15,0,-25);
	wallhorsmall(20,0,-25);
	wallhorsmall(25,0,-25);
	wallhorsmall(30,0,-25);
    //wallhorsmall(35,0,-25);
	wallhorsmall(40,0,-25);
	wallhorsmall(45,0,-25);
    wallhorsmall(50,0,-25);
    wallhorsmall(55,0,-25);
    wallhorsmall(60,0,-25);
    //wallhorsmall(65,0,-25);
//---->6	
		//---->3	
	i=i+5;
	//wallhorsmall(-55,0,-i);
	wallhorsmall(-50,0,-i);
	wallhorsmall(-45,0,-i);
	wallhorsmall(-40,0,-i);
	wallhorsmall(-35,0,-i);
	wallhorsmall(-30,0,-i);
	wallhorsmall(-25,0,-i);
    wallhorsmall(-20,0,-i);
	wallhorsmall(-15,0,-i);
	wallhorsmall(-10,0,-i);
	wallhorsmall(-5,0,-i);
	wallhorsmall(0,0,-i);
	wallhorsmall(5,0,-i);
	wallhorsmall(10,0,-i);
	wallhorsmall(15,0,-i);
	//wallhorsmall(20,0,-i);
	wallhorsmall(25,0,-i);
	//wallhorsmall(30,0,-i);
    //wallhorsmall(35,0,-i);
	wallhorsmall(40,0,-i);
	wallhorsmall(45,0,-i);
    wallhorsmall(50,0,-i);
    wallhorsmall(55,0,-i);
    wallhorsmall(60,0,-i);
    wallhorsmall(65,0,-i);

//---->7	
	i=i+5;
	//wallhorsmall(-55,0,-i);
	//wallhorsmall(-50,0,-i);
	wallhorsmall(-45,0,-i);
	wallhorsmall(-40,0,-i);
	//wallhorsmall(-35,0,-i);
	wallhorsmall(-30,0,-i);
	wallhorsmall(-25,0,-i);
    wallhorsmall(-20,0,-i);
	wallhorsmall(-15,0,-i);
	wallhorsmall(-10,0,-i);
	wallhorsmall(-5,0,-i);
	wallhorsmall(0,0,-i);
	wallhorsmall(5,0,-i);
	wallhorsmall(10,0,-i);
	//wallhorsmall(15,0,-i);
	wallhorsmall(20,0,-i);
	//wallhorsmall(25,0,-i);
	//wallhorsmall(30,0,-i);
    wallhorsmall(35,0,-i);
	//wallhorsmall(40,0,-i);
	wallhorsmall(45,0,-i);
    wallhorsmall(50,0,-i);
    wallhorsmall(55,0,-i);
    wallhorsmall(60,0,-i);
    //wallhorsmall(65,0,-i);

	//---->8
	i=i+5;
	//wallhorsmall(-55,0,-i);
	//wallhorsmall(-50,0,-i);
	wallhorsmall(-45,0,-i);
	//wallhorsmall(-40,0,-i);
	//wallhorsmall(-35,0,-i);
	//wallhorsmall(-30,0,-i);
	wallhorsmall(-25,0,-i);
    wallhorsmall(-20,0,-i);
	wallhorsmall(-15,0,-i);
	wallhorsmall(-10,0,-i);
	wallhorsmall(-5,0,-i);
	wallhorsmall(0,0,-i);
	//wallhorsmall(5,0,-i);
	wallhorsmall(10,0,-i);
	wallhorsmall(15,0,-i);
	//wallhorsmall(20,0,-i);
	//wallhorsmall(25,0,-i);
	wallhorsmall(30,0,-i);
    wallhorsmall(35,0,-i);
	//wallhorsmall(40,0,-i);
	wallhorsmall(45,0,-i);
    wallhorsmall(50,0,-i);
    wallhorsmall(55,0,-i);
    //wallhorsmall(60,0,-i);
    //wallhorsmall(65,0,-i);

//---->9	
	i=i+5;
	//wallhorsmall(-55,0,-i);
	//wallhorsmall(-50,0,-i);
	wallhorsmall(-45,0,-i);
	//wallhorsmall(-40,0,-i);
	//wallhorsmall(-35,0,-i);
	wallhorsmall(-30,0,-i);
	//wallhorsmall(-25,0,-i);
    wallhorsmall(-20,0,-i);
	//wallhorsmall(-15,0,-i);
	wallhorsmall(-10,0,-i);
	wallhorsmall(-5,0,-i);
	//wallhorsmall(0,0,-i);
	//wallhorsmall(5,0,-i);
	//wallhorsmall(10,0,-i);
	//wallhorsmall(15,0,-i);
	wallhorsmall(20,0,-i);
	//wallhorsmall(25,0,-i);
	wallhorsmall(30,0,-i);
    //wallhorsmall(35,0,-i);
	wallhorsmall(40,0,-i);
	wallhorsmall(45,0,-i);
    wallhorsmall(50,0,-i);
    //wallhorsmall(55,0,-i);
    //wallhorsmall(60,0,-i);
    //wallhorsmall(65,0,-i);

	//	glPushMatrix();    		
//---->10	
	i=i+5;
	//wallhorsmall(-55,0,-i);
	//wallhorsmall(-50,0,-i);
	wallhorsmall(-45,0,-i);
	//wallhorsmall(-40,0,-i);
	//wallhorsmall(-35,0,-i);
	//wallhorsmall(-30,0,-i);
	//wallhorsmall(-25,0,-i);
    //wallhorsmall(-20,0,-i);
	//wallhorsmall(-15,0,-i);
	//wallhorsmall(-10,0,-i);
	//wallhorsmall(-5,0,-i);
	//wallhorsmall(0,0,-i);
	wallhorsmall(5,0,-i);
	wallhorsmall(10,0,-i);
	wallhorsmall(15,0,-i);
	wallhorsmall(20,0,-i);
	wallhorsmall(25,0,-i);
	wallhorsmall(30,0,-i);
    //wallhorsmall(35,0,-i);
	//wallhorsmall(40,0,-i);
	//wallhorsmall(45,0,-i);
    //wallhorsmall(50,0,-i);
    //wallhorsmall(55,0,-i);
    //wallhorsmall(60,0,-i);
    //wallhorsmall(65,0,-i);

//---->11	
	i=i+5;
	wallhorsmall(-55,0,-i);
	//wallhorsmall(-50,0,-i);
	//wallhorsmall(-45,0,-i);
	wallhorsmall(-40,0,-i);
	//wallhorsmall(-35,0,-i);
	//wallhorsmall(-30,0,-i);
	wallhorsmall(-25,0,-i);
    //wallhorsmall(-20,0,-i);
	//wallhorsmall(-15,0,-i);
	//wallhorsmall(-10,0,-i);
	wallhorsmall(-5,0,-i);
	wallhorsmall(0,0,-i);
	wallhorsmall(5,0,-i);
	//wallhorsmall(10,0,-i);
	//wallhorsmall(15,0,-i);
	//wallhorsmall(20,0,-i);
	wallhorsmall(25,0,-i);
	//wallhorsmall(30,0,-i);
    //wallhorsmall(35,0,-i);
	wallhorsmall(40,0,-i);
	//wallhorsmall(45,0,-i);
    //wallhorsmall(50,0,-i);
    //wallhorsmall(55,0,-i);
    //wallhorsmall(60,0,-i);
    //wallhorsmall(65,0,-i);
	
//---->12	
	i=i+5;
	//wallhorsmall(-55,0,-i);
	//wallhorsmall(-50,0,-i);
	wallhorsmall(-45,0,-i);
	//wallhorsmall(-40,0,-i);
	wallhorsmall(-35,0,-i);
	//wallhorsmall(-30,0,-i);
	//wallhorsmall(-25,0,-i);
    wallhorsmall(-20,0,-i);
	//wallhorsmall(-15,0,-i);
	wallhorsmall(-10,0,-i);
	wallhorsmall(-5,0,-i);
	wallhorsmall(0,0,-i);
	//wallhorsmall(5,0,-i);
	//wallhorsmall(10,0,-i);
	//wallhorsmall(15,0,-i);
	wallhorsmall(20,0,-i);
	//wallhorsmall(25,0,-i);
	//wallhorsmall(30,0,-i);
    wallhorsmall(35,0,-i);
	//wallhorsmall(40,0,-i);
	//wallhorsmall(45,0,-i);
    wallhorsmall(50,0,-i);
    //wallhorsmall(55,0,-i);
    //wallhorsmall(60,0,-i);
    //wallhorsmall(65,0,-i);

//---->13	
	i=i+5;
	wallhorsmall(-55,0,-i);
	wallhorsmall(-50,0,-i);
	wallhorsmall(-45,0,-i);
	wallhorsmall(-40,0,-i);
	wallhorsmall(-35,0,-i);
	wallhorsmall(-30,0,-i);
	wallhorsmall(-25,0,-i);
    wallhorsmall(-20,0,-i);
	wallhorsmall(-15,0,-i);
	wallhorsmall(-10,0,-i);
	wallhorsmall(-5,0,-i);
	/*wallhorsmall(0,0,-i);
	wallhorsmall(5,0,-i);
	wallhorsmall(10,0,-i);
	wallhorsmall(15,0,-i);
	wallhorsmall(20,0,-i);
	*/
	//wallhorsmall(25,0,-i);
	wallhorsmall(30,0,-i);
    //wallhorsmall(35,0,-i);
	wallhorsmall(40,0,-i);
	//wallhorsmall(45,0,-i);
    wallhorsmall(50,0,-i);
    wallhorsmall(55,0,-i);
    //wallhorsmall(60,0,-i);
    //wallhorsmall(65,0,-i);

//---->14	
	i=i+5;
	//wallhorsmall(-55,0,-i);
	wallhorsmall(-50,0,-i);
	//wallhorsmall(-45,0,-i);
	wallhorsmall(-40,0,-i);
	wallhorsmall(-35,0,-i);
	wallhorsmall(-30,0,-i);
	wallhorsmall(-25,0,-i);
    wallhorsmall(-20,0,-i);
	wallhorsmall(-15,0,-i);
	wallhorsmall(-10,0,-i);
	//wallhorsmall(-5,0,-i);
	wallhorsmall(0,0,-i);
	wallhorsmall(5,0,-i);
	wallhorsmall(10,0,-i);
	//wallhorsmall(15,0,-i);
	//wallhorsmall(20,0,-i);
	wallhorsmall(25,0,-i);
	//wallhorsmall(30,0,-i);
    wallhorsmall(35,0,-i);
	//wallhorsmall(40,0,-i);
	wallhorsmall(45,0,-i);
    wallhorsmall(50,0,-i);
    wallhorsmall(55,0,-i);
    wallhorsmall(60,0,-i);
    //wallhorsmall(65,0,-i);


//---->15	
	i=i+5;
	//wallhorsmall(-55,0,-i);
	wallhorsmall(-50,0,-i);
	wallhorsmall(-45,0,-i);
	wallhorsmall(-40,0,-i);
	wallhorsmall(-35,0,-i);
	wallhorsmall(-30,0,-i);
	wallhorsmall(-25,0,-i);
    wallhorsmall(-20,0,-i);
	wallhorsmall(-15,0,-i);
	wallhorsmall(-10,0,-i);
	//wallhorsmall(-5,0,-i);
	wallhorsmall(0,0,-i);
	//wallhorsmall(5,0,-i);
	wallhorsmall(10,0,-i);
	wallhorsmall(15,0,-i);
	wallhorsmall(20,0,-i);
	//wallhorsmall(25,0,-i);
	wallhorsmall(30,0,-i);
    wallhorsmall(35,0,-i);
	//wallhorsmall(40,0,-i);
	wallhorsmall(45,0,-i);
    wallhorsmall(50,0,-i);
    wallhorsmall(55,0,-i);
    wallhorsmall(60,0,-i);
    //wallhorsmall(65,0,-i);

//---->16	
	i=i+5;
	//wallhorsmall(-55,0,-i);
	//wallhorsmall(-50,0,-i);
	wallhorsmall(-45,0,-i);
	//wallhorsmall(-40,0,-i);
	wallhorsmall(-35,0,-i);
	//wallhorsmall(-30,0,-i);
	wallhorsmall(-25,0,-i);
    //wallhorsmall(-20,0,-i);
	//wallhorsmall(-15,0,-i);
	//wallhorsmall(-10,0,-i);
	//wallhorsmall(-5,0,-i);
	//wallhorsmall(0,0,-i);
	wallhorsmall(5,0,-i);
	//wallhorsmall(10,0,-i);
	//wallhorsmall(15,0,-i);
	wallhorsmall(20,0,-i);
	wallhorsmall(25,0,-i);
	wallhorsmall(30,0,-i);
    //wallhorsmall(35,0,-i);
	//wallhorsmall(40,0,-i);
	//wallhorsmall(45,0,-i);
    wallhorsmall(50,0,-i);
    //wallhorsmall(55,0,-i);
    //wallhorsmall(60,0,-i);
    //wallhorsmall(65,0,-i);

//---->17	
	i=i+5;
	//wallhorsmall(-55,0,-i);
	wallhorsmall(-50,0,-i);
	wallhorsmall(-45,0,-i);
	wallhorsmall(-40,0,-i);
	wallhorsmall(-35,0,-i);
	wallhorsmall(-30,0,-i);
	wallhorsmall(-25,0,-i);
    //wallhorsmall(-20,0,-i);
	wallhorsmall(-15,0,-i);
	wallhorsmall(-10,0,-i);
	wallhorsmall(-5,0,-i);
	//wallhorsmall(0,0,-i);
	//wallhorsmall(5,0,-i);
	//wallhorsmall(10,0,-i);
	wallhorsmall(15,0,-i);
	wallhorsmall(20,0,-i);
	wallhorsmall(25,0,-i);
	wallhorsmall(30,0,-i);
    //wallhorsmall(35,0,-i);
	//wallhorsmall(40,0,-i);
	//wallhorsmall(45,0,-i);
    wallhorsmall(50,0,-i);
    wallhorsmall(55,0,-i);
    wallhorsmall(60,0,-i);
    //wallhorsmall(65,0,-i);
//---->18
		i=i+5;
	wallhorsmall(-55,0,-i);
	wallhorsmall(-50,0,-i);
	wallhorsmall(-45,0,-i);
	wallhorsmall(-40,0,-i);
	wallhorsmall(-35,0,-i);
	wallhorsmall(-30,0,-i);
	wallhorsmall(-25,0,-i);
    wallhorsmall(-20,0,-i);
	wallhorsmall(-15,0,-i);
	wallhorsmall(-10,0,-i);
	wallhorsmall(-5,0,-i);
	wallhorsmall(0,0,-i);
	wallhorsmall(10,0,-i);
	wallhorsmall(15,0,-i);
	wallhorsmall(20,0,-i);
	wallhorsmall(25,0,-i);
	wallhorsmall(30,0,-i);
    wallhorsmall(35,0,-i);
	wallhorsmall(40,0,-i);
	wallhorsmall(45,0,-i);
    wallhorsmall(50,0,-i);
    wallhorsmall(55,0,-i);
    wallhorsmall(60,0,-i);
    wallhorsmall(65,0,-i);

////------------------------------------------\\\\\\

//------->vertically
	int y=5;
//-->1
//---->2
	y=y+5;
	wallversmall(-30,0,-y);
	wallversmall(60,0,-y);
//--->3
	y=y+5;
	wallversmall(-10,0,-y);
	wallversmall(-55,0,-y);
	wallversmall(60,0,-y);

 //---->4
	y=y+5;
	wallversmall(-55,0,-y);
	wallversmall(50,0,-y);
	//wallversmall(-60,0,-y);
	wallversmall(60,0,-y);
//-->5	
    y=y+5;
	wallversmall(60,0,-y);
//-->6
y=y+5;
	wallversmall(30,0,-y);
//--->7
	y=y+5;
	wallversmall(-55,0,-y);
    wallversmall(25,0,-y);
    wallversmall(35,0,-y);
    wallversmall(30,0,-y);
//--->8
	y=y+5;
	wallversmall(-55,0,-y);
    wallversmall(-50,0,-y);
    wallversmall(-40,0,-y);
    wallversmall(-35,0,-y);
	wallversmall(25,0,-y);
    wallversmall(20,0,-y);
    wallversmall(60,0,-y);
//--->9
	y=y+5;
	wallversmall(-55,0,-y);
    wallversmall(-45,0,-y);
    wallversmall(-40,0,-y);
    wallversmall(-35,0,-y);
	wallversmall(-30,0,-y);
    wallversmall(0,0,-y);
    wallversmall(5,0,-y);
	wallversmall(25,0,-y);
    wallversmall(15,0,-y);
    wallversmall(60,0,-y);
    wallversmall(55,0,-y);

//--->10
	y=y+5;
	wallversmall(-55,0,-y);
    wallversmall(-50,0,-y);
    wallversmall(-40,0,-y);
    wallversmall(-35,0,-y);
	wallversmall(-25,0,-y);
    wallversmall(-20,0,-y);
    wallversmall(-15,0,-y);
    wallversmall(-5,0,-y);
    wallversmall(0,0,-y);
    wallversmall(10,0,-y);
    wallversmall(50,0,-y);
    wallversmall(55,0,-y);
    wallversmall(60,0,-y);

//--->11
	y=y+5;
	wallversmall(-55,0,-y);
    wallversmall(-50,0,-y);
    wallversmall(-45,0,-y);
	wallversmall(-40,0,-y);
	wallversmall(-35,0,-y);
	wallversmall(-25,0,-y);
    wallversmall(-20,0,-y);
    wallversmall(-10,0,-y);
	wallversmall(15,0,-y);
    wallversmall(20,0,-y);
    wallversmall(30,0,-y);
    wallversmall(35,0,-y);
    wallversmall(45,0,-y);
    wallversmall(50,0,-y);
    wallversmall(55,0,-y);
    wallversmall(60,0,-y);

//--->12
	y=y+5;
    wallversmall(-50,0,-y);
    wallversmall(-40,0,-y);
    wallversmall(-35,0,-y);
	wallversmall(-30,0,-y);
    wallversmall(-20,0,-y);
	wallversmall(5,0,-y);
    wallversmall(10,0,-y);
    wallversmall(15,0,-y);
	

    
	wallversmall(25,0,-y);
    wallversmall(30,0,-y);
    wallversmall(40,0,-y);
    wallversmall(50,0,-y);
    wallversmall(55,0,-y);
    wallversmall(60,0,-y);
//--->13
	y=y+5;
	wallversmall(-25,0,-y);
    wallversmall(5,0,-y);
	wallversmall(10,0,-y);
    wallversmall(20,0,-y);
    wallversmall(25,0,-y);
    wallversmall(35,0,-y);
    wallversmall(40,0,-y);
    wallversmall(45,0,-y);
    wallversmall(55,0,-y);
    wallversmall(60,0,-y);

//--->14
	y=y+5;
	wallversmall(-35,0,-y);
	wallversmall(0,0,-y);
    wallversmall(10,0,-y);
    wallversmall(15,0,-y);
    wallversmall(20,0,-y);
    wallversmall(30,0,-y);
    wallversmall(60,0,-y);
//--->15
	y=y+5;
	wallversmall(-55,0,-y);
    wallversmall(-5,0,-y);
    wallversmall(5,0,-y);
	wallversmall(15,0,-y);
    wallversmall(25,0,-y);
//--->16
	y=y+5;
	wallversmall(-55,0,-y);
    wallversmall(-35,0,-y);
	wallversmall(-15,0,-y);
	wallversmall(-5,0,-y);
    wallversmall(0,0,-y);
    wallversmall(5,0,-y);
    wallversmall(15,0,-y);
    wallversmall(35,0,-y);
    wallversmall(40,0,-y);
    wallversmall(45,0,-y);
    wallversmall(55,0,-y);
//--->17
	y=y+5;
	wallversmall(-55,0,-y);
    wallversmall(-45,0,-y);
	wallversmall(-25,0,-y);
    wallversmall(-5,0,-y);
    wallversmall(5,0,-y);
    wallversmall(10,0,-y);
    wallversmall(35,0,-y);
    wallversmall(40,0,-y);
    wallversmall(50,0,-y);
    wallversmall(60,0,-y);
//--->18
	y=y+5;
	wallversmall(0,0,-y);
    wallversmall(5,0,-y);
    
//---> extension
	for(int j=0;j<11;j++){
	y=y+5;
	wallversmall(0,0,-y);
    wallversmall(5,0,-y);
	}
	


}

//
//
//
//



void TimerFunc(int value) 
{
  
	counter+=1;   
	lol=counter%10; 

 glutTimerFunc(0.1,TimerFunc,1);
glutPostRedisplay();
}

void cubepositions () { //set the positions of the cubes

    for (int i=0;i<100;i++)
    {
    int j = rand();
	int k = rand();
	
		positionz[i] = j%5 + 1;
		positionx[i] = k%5 + 1;
    }
}

//draw the cube
void cube () {
    for (int i=0;i<100 - 1;i++)
    {
    glPushMatrix();
    glTranslated(-positionx[i + 1] * 10, 0, -positionz[i + 1] * 
10); //translate the cube
    glutSolidCube(2); //draw the cube
    glPopMatrix();
    }
}

void init () {  
	PlaySound(L"halo", 0, SND_ASYNC);


glEnable(GL_BLEND);

  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	cubepositions();
	
		Image* imageeasy = loadBMP("easy.bmp");
	_textureIdeasy = loadTexture(imageeasy);delete imageeasy;
		
	Image* imagenormal = loadBMP("normal.bmp");
	_textureIdnormal = loadTexture(imagenormal);delete imagenormal;
	
	Image* imagehard = loadBMP("hard.bmp");
	_textureIdhard = loadTexture(imagehard);delete imagehard;
	
	
	Image* image10 = loadBMP("abcabc.bmp");
	_textureId10 = loadTexture(image10);delete image10;

	Image* image9 = loadBMP("frac.bmp");
	_textureId9 = loadTexture(image9);delete image9;

	Image* image6 = loadBMP("frac2.bmp");
	_textureId6 = loadTexture(image6);delete image6;
	
	Image* image = loadBMP("sasasa.bmp");
	_textureId = loadTexture(image);delete image;
	
	Image* imageee = loadBMP("aaa.bmp");
	_textureIddd = loadTexture(imageee);delete imageee;
	
	//if (counter%12==0){
		
		Image* image1 = loadBMP("ccc.bmp");
		_textureId1 = loadTexture(image1);delete image1;

		Image* image2 = loadBMP("fff.bmp");
		_textureId2 = loadTexture(image2);delete image2;

		Image* image3 = loadBMP("ggg.bmp");
		_textureId3 = loadTexture(image3);delete image3;
		
		Image* image4 = loadBMP("hhh.bmp");
		_textureId4 = loadTexture(image4);delete image4;


		Image* imageeeee = loadBMP("bbbbb.bmp");
		_textureIddddd = loadTexture(imageeeee);delete imageeeee;

				Image* imageeeee2 = loadBMP("bbbbbb.bmp");
		_textureIddddd2 = loadTexture(imageeeee2);delete imageeeee2;
	
	
		Image* imageeee = loadBMP("aa.bmp");
		_textureIdddd = loadTexture(imageeee);delete imageeee;

		Image* image8 = loadBMP("war.bmp");
		_textureId8 = loadTexture(image8);delete image8;

		Image* image7 = loadBMP("key.bmp");
		_textureId7 = loadTexture(image7);delete image7;

		Image* imagehelp = loadBMP("help.bmp");
		_textureIdhelp = loadTexture(imagehelp);delete imagehelp;

		Image* imagelast = loadBMP("gold.bmp");
		_textureIdlast = loadTexture(imagelast);delete imagelast;

				Image* imagebon = loadBMP("diamond.bmp");
		_textureIdbon = loadTexture(imagebon);delete imagebon;
}

void enable () {
    glEnable (GL_DEPTH_TEST); //enable the depth testing
   // glEnable (GL_LIGHTING); //enable the lighting
   // glEnable (GL_LIGHT0); //enable LIGHT0, our Diffuse Light

	glEnable(GL_NORMALIZE);
	glEnable (GL_COLOR_MATERIAL);
  // glShadeModel (GL_SMOOTH); //set the shader to smooth shader

}


void check_bonus_collision(){

   if (zpos<=b1+1 && zpos>=b1-1 && xpos>=a1-1&&xpos<=a1+1&&!mat){
   bonus++;
   b1=-3000;
   }

   if (zpos<=b2+1 && zpos>=b2-1 && xpos>=a2-1&&xpos<=a2+1&&!mat){
   bonus++;
   b2=-3000;
   }

   if (zpos<=b3+1 && zpos>=b3-1 && xpos>=a3-1&&xpos<=a3+1&&!mat){
   bonus++;
   b3=-3000;
   }

   if (zpos<=b4+1 && zpos>=b4-1 && xpos>=a4-1&&xpos<=a4+1&&!mat){
   bonus++;
   b4=-3000;
   }

   if (zpos<=b5+1 && zpos>=b5-1 && xpos>=a5-1&&xpos<=a5+1&&!mat){
   bonus++;
   b5=-3000;
   }

   if (zpos<=b6+1 && zpos>=b6-1 && xpos>=a6-1&&xpos<=a6+1&&!mat){
   bonus++;
   b6=-3000;
   }

   if (zpos<=b7+1 && zpos>=b7-1 && xpos>=a7-1&&xpos<=a7+1&&!mat){
   bonus++;
   b7=-3000;
   }

   if (zpos<=b8+1 && zpos>=b8-1 && xpos>=a8-1&&xpos<=a8+1&&!mat){
   bonus++;
   b8=-3000;
   }

   if (zpos<=b9+1 && zpos>=b9-1 && xpos>=a9-1&&xpos<=a9+1&&!mat){
   bonus++;
   b9=-3000;
   }

   if (zpos<=b10+1 && zpos>=b10-1 && xpos>=a10-1&&xpos<=a10+1&&!mat){
   bonus++;
   b10=-3000;
   }

   if (zpos<=b11+1 && zpos>=b11-1 && xpos>=a11-1&&xpos<=a11+1&&!mat){
   bonus++;
   b11=-3000;
   }

   if (zpos<=b12+1 && zpos>=b12-1 && xpos>=a12-1&&xpos<=a12+1&&!mat){
   bonus++;
   b12=-3000;
   }

   if (zpos<=b13+1 && zpos>=b13-1 && xpos>=a13-1&&xpos<=a13+1&&!mat){
   bonus++;
   b13=-3000;
   }

   if (zpos<=b14+1 && zpos>=b14-1 && xpos>=a14-1&&xpos<=a14+1&&!mat){
   bonus++;
   b14=-3000;
   }

   if (zpos<=b15+1 && zpos>=b15-1 && xpos>=a15-1&&xpos<=a15+1&&!mat){
   bonus++;
   b15=-3000;
   }

   if (zpos<=b16+1 && zpos>=b16-1 && xpos>=a16-1&&xpos<=a16+1&&!mat){
   bonus++;
   b16=-3000;
   }

   if (zpos<=b17+1 && zpos>=b17-1 && xpos>=a17-1&&xpos<=a17+1&&!mat){
   bonus++;
   b17=-3000;
   }

   if (zpos<=b18+1 && zpos>=b18-1 && xpos>=a18-1&&xpos<=a18+1&&!mat){
   bonus++;
   b18=-3000;
   }

   if (zpos<=b19+1 && zpos>=b19-1 && xpos>=a19-1&&xpos<=a19+1&&!mat){
   bonus++;
   b19=-3000;
   }

   if (zpos<=b20+1 && zpos>=b20-1 && xpos>=a20-1&&xpos<=a20+1&&!mat){
   bonus++;
   b20=-3000;
   }

}

void display () {
	glClearColor (0.0,0.0,0.0,1.0); //clear the screen to black
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 

//clear the color buffer and the depth buffer
    enable();
	if (chooser==false&&xpos>=4 && xpos<=6&&zpos>=-1&&zpos<=1) {
		chooser=true;
		chooser2=1;
		chooser3=3;
	afterchoosing=50;	
	
	}
	
		if (chooser==false&&zpos<=-4 && zpos>=-6&&xpos>=-1&&xpos<=1) {
		chooser=true;
		chooser2=2;
		chooser3=2;
		afterchoosing=50;
		}


			if (chooser==false&&xpos<=-4 && xpos>=-6&&zpos>=-1&&zpos<=1) {
		chooser=true;
		chooser2=3;
		chooser3=1.0;
			afterchoosing=50;
			}

check_bonus_collision();
			if (zpos<=za+1 && zpos>=za-1 && xpos>=xa-1&&xpos<=xa+1&&!mat){
			wincount++;
			za=-3000;
			}

			if (zpos<=zb+1 && zpos>=zb-1 && xpos>=xb-1&&xpos<=xb+1&&!mat){
			wincount++;
			zb=-3000;
			}

			if (zpos<=zc+1 && zpos>=zc-1 && xpos>=xc-1&&xpos<=xc+1&&!mat){
			wincount++;
			zc=-3000;
			}
			
			if (zpos<=zd+1 && zpos>=zd-1 && xpos>=xd-1&&xpos<=xd+1&&!mat){
			wincount++;
			zd=-3000;
			}

			if (zpos<=ze+1 && zpos>=ze-1 && xpos>=xe-1&&xpos<=xe+1&&!mat){
			wincount++;
			ze=-3000;
			}
			if (wincount==5){
			win1=-2000;
			win2=-2000;
			coordinates[2146][2]=-2000;
			coordinates[2147][2]=-2000;
			coordinates[2146][3]=-2000;
			coordinates[2147][3]=-2000;
			}

glLoadIdentity(); 

	
	glTranslatef(0.0f, -2.0f, /*-cRadius*/ -4.0f);
    glRotatef(xrot,1.0,0.0,0.0);
   
	
	
	
	// glColor3f(1.0f, 0.5f, 0.3f);
	glPushMatrix();
	
		if (mat==false){
			
			if(test!=1){
			glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId10);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
w=1.0;
	draw_head();
				
	glDisable(GL_TEXTURE_2D);}
			
			if(test==1){
w=1.0;			
			glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId8);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
w=1.0;
	draw_head();
	
	glDisable(GL_TEXTURE_2D);			
			
			glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId6);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
w=1.0;
	draw_body();
	
	glDisable(GL_TEXTURE_2D);			
			
			}	
	
	

			glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId9);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	draw_body();


		//
		//
		//
		glDisable(GL_TEXTURE_2D);
		
			glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId10);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);		
		
			draw_right_arm();
	draw_left_arm();
	draw_base();	
	glDisable(GL_TEXTURE_2D);
		
	if(helper%2==1){
							glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureIdhelp);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
		draw_help();
		glDisable(GL_TEXTURE_2D);}
		
		}
		if (mat==true){
			glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureIddddd2);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
w=0.5;
			draw_base();
	draw_body();
	draw_head();
	draw_right_arm();
	draw_left_arm();
		glDisable(GL_TEXTURE_2D);		



		}
glPopMatrix();		
		


		// hena ta3mel call ya yosry for your drawing function
//	 glutSolidCube(2); //Our character to follow
//

	glRotatef(yrot,0.0,1.0,0.0);  //rotate our camera on the y-axis (up and down)

	glTranslated(-xpos,0.0f,-zpos); //translate the screento the position of our camera
  
	glColor3f(0.5f, 0.5f, 0.5f);
//
	//
	//
	//bagarb 7aga


	glPushMatrix();


	//cube(); //call the cube drawing function

//glColor3f(0.5f, 0.5f, 0.5f);

//	glPushMatrix();
//	cube();
  //  glTranslated(0,1,0); //translate the screento the position of our camera
	//glPushMatrix();
	//glTranslated(0,0,-200);
	//glScalef( 2, 0.5, 2 );
	//draw_maze();
	//glPopMatrix();
	if(mat==true){

	if(counter%4==0){

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);}

		if(counter%4==1){

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId2);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);}

			if(counter%4==2){

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId3);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);}

				if(counter%4==3){

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId4);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);}
		glPushMatrix();
		w=1;
glTranslated(x1+((x2-x1)/2),0,z1+((z2-z1)/2));
		draw_base();
	draw_body();
	draw_head();
	draw_right_arm();
	draw_left_arm();
glDisable(GL_TEXTURE_2D);
glPopMatrix();
	}

glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureIddd);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);	
	

	//glTranslated(0,0,lol);
		glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_QUADS);
	glTexCoord2f(-100.0f, -300.0f);
	glVertex3f(-500,5,-1500);
	glTexCoord2f(-100.0f, 40.0f);
	glVertex3f(-500,5,200);
	glTexCoord2f(100.0f, 40.0f);
	glVertex3f(500,5,200);
	glTexCoord2f(100.0f, -300.0f);
	glVertex3f(500,5,-1500);
	glEnd();   

	glDisable(GL_TEXTURE_2D);
	glPopMatrix();

glPushMatrix();
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

			glColor3f(1.0f,1.0f,1.0f);
			//glTranslated(lol/5,0,lol/5);
			//glRotated(lol/5,0,1,0);
	glBegin(GL_QUADS);
	
	glTexCoord2f(-100.0f, -300.0f);
	glVertex3f(-500,0,-1500);
	
	glTexCoord2f(-100.0f, 40.0f);
	glVertex3f(-500,0,200);
	
	glTexCoord2f(100.0f, 20.0f);
	glVertex3f(500,0,100);
	
	glTexCoord2f(100.0f, -300.0f);
	glVertex3f(500,0,-1500);
	
	glEnd();   
	glDisable(GL_TEXTURE_2D); 
	glPopMatrix();


glPushMatrix();
glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureIdhard);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

glTranslated(-5,afterchoosing,0);
draw_cube();
glDisable(GL_TEXTURE_2D);
glPopMatrix();


glPushMatrix();
glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureIdeasy);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
glTranslated(5,afterchoosing,0);
draw_cube();
glDisable(GL_TEXTURE_2D);
glPopMatrix();

glPushMatrix();
glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureIdnormal);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
glTranslated(0,afterchoosing,-5);
draw_cube();
glDisable(GL_TEXTURE_2D);
glPopMatrix();

if(chooser){


	if(counter%4==0){

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId1);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);}

		if(counter%4==1){

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId2);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);}

			if(counter%4==2){

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId3);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);}

				if(counter%4==3){

	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId4);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);}
		
			//	glPushMatrix();
			//	endway();
			//	glPopMatrix();

glPushMatrix();
wall4();
glPopMatrix();



	glPushMatrix();
glScalef( chooser3, 1,chooser3  );
	glTranslated(0,0,-10);
	draw_onemaze();
	glPopMatrix();
	
	glPushMatrix();
		glScalef( chooser3, 1,chooser3  );
	glTranslated(0,0,-155);
	draw_onemaze();
	glPopMatrix();

		glPushMatrix();
		glScalef( chooser3, 1,chooser3  );
	glTranslated(0,0,-300);
	draw_onemaze();
	glPopMatrix();

		glPushMatrix();
			glScalef( chooser3, 1,chooser3  );
	glTranslated(0,0,-445);
	draw_onemaze();
	glPopMatrix();

		glPushMatrix();
		glScalef( chooser3, 1,chooser3 );
	glTranslated(0,0,-590);
	draw_onemaze();
	glPopMatrix();	

	
				glPushMatrix();	
				endway();
				glDisable(GL_TEXTURE_2D);
				glPopMatrix();
	

	
		glPushMatrix();
		
		glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureIdddd);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
doors();
	glDisable(GL_TEXTURE_2D);
	
glPopMatrix();




glPushMatrix();
		glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureId7);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
easy_normal_hard();
glDisable(GL_TEXTURE_2D);
				glPopMatrix();
				
//
				//
				glPushMatrix();
		glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureIdbon);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
draw_bonus_enh();
glDisable(GL_TEXTURE_2D);
				glPopMatrix();



				glPushMatrix();
							glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, _textureIdlast);
    	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
glTranslated(0,0,95);
glScaled(1.5,1,1.5);
draw_cube();
glDisable(GL_TEXTURE_2D);
glPopMatrix();
				
				if(checkcount==true&&chooser==true){

for(int i=6; i<434; i++){
coordinates[i][2]=coordinates[i][2]-10;
coordinates[i][3]=coordinates[i][3]-10;
coordinates[i][0]=coordinates[i][0]*chooser3;
coordinates[i][1]=coordinates[i][1]*chooser3;
coordinates[i][2]=coordinates[i][2]*chooser3;
coordinates[i][3]=coordinates[i][3]*chooser3;
}

	
for(int i=434; i<862; i++){
coordinates[i][2]=coordinates[i][2]-155;
coordinates[i][3]=coordinates[i][3]-155;
coordinates[i][0]=coordinates[i][0]*chooser3;
coordinates[i][1]=coordinates[i][1]*chooser3;
coordinates[i][2]=coordinates[i][2]*chooser3;
coordinates[i][3]=coordinates[i][3]*chooser3;
}	
	
	
for(int i=862; i<1290; i++){
coordinates[i][2]=coordinates[i][2]-300;
coordinates[i][3]=coordinates[i][3]-300;
coordinates[i][0]=coordinates[i][0]*chooser3;
coordinates[i][1]=coordinates[i][1]*chooser3;
coordinates[i][2]=coordinates[i][2]*chooser3;
coordinates[i][3]=coordinates[i][3]*chooser3;
}	
	
for(int i=1290; i<1718; i++){
coordinates[i][2]=coordinates[i][2]-445;
coordinates[i][3]=coordinates[i][3]-445;
coordinates[i][0]=coordinates[i][0]*chooser3;
coordinates[i][1]=coordinates[i][1]*chooser3;
coordinates[i][2]=coordinates[i][2]*chooser3;
coordinates[i][3]=coordinates[i][3]*chooser3;
}	
	
for(int i=1718; i<2146; i++){
coordinates[i][2]=coordinates[i][2]-590;
coordinates[i][3]=coordinates[i][3]-590;
coordinates[i][0]=coordinates[i][0]*chooser3;
coordinates[i][1]=coordinates[i][1]*chooser3;
coordinates[i][2]=coordinates[i][2]*chooser3;
coordinates[i][3]=coordinates[i][3]*chooser3;
}	
coordinates[2148][0]=coordinates[2148][0]*chooser3;
coordinates[2148][1]=coordinates[2148][1]*chooser3;
coordinates[2148][2]=coordinates[2148][2]*chooser3;
coordinates[2148][3]=coordinates[2148][3]*chooser3;
	

								if(chooser2==1){easy();}
				if(chooser2==2){hard();}
				if(chooser2==3){normal();}
				}
checkcount=false;
test=0;
if (mat==false){
	
for (int i=0; i<coorNum; i++){
       
  	x1=xpos;
	x2=xpos;
	z1=zpos;
	z2=zpos;
int temp1=coordinates[i][0];
int temp2=coordinates[i][1];
int temp3=coordinates[i][2];
int temp4=coordinates[i][3];
if (temp1==temp2){	
	if(  ((temp1==x1||temp1==x2)||(x1>temp1&&x2<temp1)||(x1<temp1&&x2>temp1))  &&  ((z1>=temp3&&z1<=temp4)||(z2>=temp3&&z2<=temp4))  ){
 test=2;
// printf("%d\n%d\n%d\n%d\n%d\n ",test,temp1,temp2,temp3,temp4);
	//	printf("%d",test);
	mat=true;
	PlaySound(L"scream4", 0, SND_ASYNC);
	
	}}


if (temp3==temp4){	
	if(  ((temp3==z1||temp3==z2)||(z1>temp3&&z2<temp3)||(z1<temp3&&z2>temp3))  &&  ((x1>=temp1&&x1<=temp2)||(x2>=temp1&&x2<=temp2))  ){
 test=2;
	//	printf("%d",test);
	mat=true;
	PlaySound(L"scream4", 0, SND_ASYNC);
	
	}}


if (temp1==temp2){	
	if  ( (temp1==x1+1||temp1==x1-1||temp1==x2+1||temp1==x2-1)&&  ((z1+1>=temp3&&z1-1<=temp4)||(z2+1>=temp3&&z2-1<=temp4))  ){
 test=1;
// printf("%d\n%d\n%d\n%d\n%d\n ",test,temp1,temp2,temp3,temp4);
		//printf("%d",test);
	
	}}

if (temp3==temp4){	
	if  ((temp3==z1+1||temp3==z2+1||temp3==z1-1||temp3==z2-1)&&  ((x1+1>=temp1&&x1-1<=temp2)||(x2+1>=temp1&&x2-1<=temp2))  ){
 test=1;
	//	printf("%d",test);

	}}

//if (opop==0){
//test=0;
//}

}



}



}

    glutSwapBuffers(); //swap the buffers

    glFlush();
	//angle++; //increase the angle
}

void reshape (int w, int h) {
    glViewport (0, 0, (GLsizei)w, (GLsizei)h); //set the viewportto the current window specifications
    glMatrixMode (GL_PROJECTION); //set the matrix to projection

    glLoadIdentity ();
    gluPerspective (60, (GLfloat)w / (GLfloat)h, 0.1, 100.0); //set the perspective (angle of sight, width, height, , depth)
    glMatrixMode (GL_MODELVIEW); //set the matrix back to model

}

void keyboard (unsigned char key, int x, int y) {
   /* if (key=='q'&&zpos<90&&!winner)
    {
    xrot += 1;
    if (xrot >360) xrot -= 360;
    }*/
  if (key=='b'&&zpos<95&&!winner)
    {
		   
		 

  	x1=xpos-1;
	x2=xpos+1;
	z1=zpos+1;
	z2=zpos-1;
	test=2;

	//printf("%d\n",coordinates[2148][3]);
  //printf("%d\n",coordinates[6][0]);
  //printf("%d\n",coordinates[6][1]);
   // printf("%d\n",coordinates[6][2]);
	 // printf("%d\n",coordinates[6][3]);
  // printf("%d\n%d\n%d\n%d\n%d\n ",test,x1,x2,z1,z2);
printf("%d\n",wincount);
	//test=4;
	  
  }

		
    /*if (key=='z'&&zpos<95&&!winner)
    {
    xrot -= 1;
    if (xrot < -360) xrot += 360;
    }*/


    if (key=='d'&&zpos<95&&!winner)
    {
    yrot += 5;
    if (yrot >360) yrot -= 360;
    }

    if (key=='a'&&zpos<95&&!winner)
    {
    yrot -= 5;
    if (yrot < -360) yrot += 360;
    }

	
    if (key=='h'&&zpos<95&&!winner)
    {
		helper++;}

    if (key=='w'&&zpos<95&&!winner)
    {
    float xrotrad, yrotrad;
    yrotrad = (yrot / 180 * 3.141592654f);
    xrotrad = (xrot / 180 * 3.141592654f); 
    xpos += float(sin(yrotrad));
    zpos -= float(cos(yrotrad));
    ypos -= float(sin(xrotrad));
 
	}

    if (key=='s'&&zpos<95&&!winner)
    {
    float xrotrad, yrotrad;
    yrotrad = (yrot / 180 * 3.141592654f);
    xrotrad = (xrot / 180 * 3.141592654f); 
    xpos -= float(sin(yrotrad));
    zpos += float(cos(yrotrad));
    ypos += float(sin(xrotrad));
    }

    if (key=='c'&&zpos<95&&!winner)
    {
    float yrotrad;
    yrotrad = (yrot / 180 * 3.141592654f);
    xpos += float(cos(yrotrad)) * 0.2;
    zpos += float(sin(yrotrad)) * 0.2;
    }

    if (key=='e'&&zpos<95&&!winner)
    {
    float yrotrad;
    yrotrad = (yrot / 180 * 3.141592654f);
    xpos -= float(cos(yrotrad)) * 0.2;
    zpos -= float(sin(yrotrad)) * 0.2;
    }
if(zpos>=90&&wincount==5){
	PlaySound(L"yw", 0, SND_ASYNC);
winner = true;
}
if(zpos>=94){
zpos=90;
}
if(zpos<=-1494){
zpos=-1490;
}

if(xpos>=494){
xpos=490;
}
if(xpos<=-494){
xpos=-490;
}
}


void mySpecialKeyFunc( int key, int x, int y )
	{
		if (zpos<95&&!winner){
		float xrotrad,yrotrad;
		switch ( key ) {
	case GLUT_KEY_UP:		
		yrotrad = (yrot / 180 * 3.141592654f);
		xrotrad = (xrot / 180 * 3.141592654f); 
		xpos += float(sin(yrotrad));
		zpos -= float(cos(yrotrad));
		ypos -= float(sin(xrotrad));
		break;
	case GLUT_KEY_DOWN:
		//float xrotrad, yrotrad;
		yrotrad = (yrot / 180 * 3.141592654f);
		xrotrad = (xrot / 180 * 3.141592654f); 
		xpos -= float(sin(yrotrad));
		zpos += float(cos(yrotrad));
		ypos += float(sin(xrotrad));
		break;
	case GLUT_KEY_LEFT:
		yrot -= 5;
    if (yrot < -360) 
		yrot += 360;
		break;
	case GLUT_KEY_RIGHT:
		yrot += 5;
    if (yrot >360) 
		yrot -= 360;
		break;
		}
		}


		if(zpos>=90&&wincount==5){
	PlaySound(L"yw", 0, SND_ASYNC);
winner = true;
}

if(zpos>=94){
zpos=90;
}
if(zpos<=-1494){
zpos=-1490;
}

if(xpos>=494){
xpos=490;
}
if(xpos<=-494){
xpos=-490;
}



}
int main (int argc, char **argv) {
    glutInit (&argc, argv);
    glutInitDisplayMode (GLUT_DOUBLE | GLUT_DEPTH); 
    glutInitWindowSize (500, 500); 
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("maze"); 
    init (); 
    glutDisplayFunc (display); 
    glutIdleFunc (display); 
    glutReshapeFunc (reshape);
    glutKeyboardFunc (keyboard); 
    glutSpecialFunc( mySpecialKeyFunc );
	glutTimerFunc(0.1,TimerFunc,1);
	glutMainLoop (); 
    return 0;
}
