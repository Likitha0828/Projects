4.c
#include<GL/glut.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
GLfloat dy1=10,dx=0,dx2=15,dy2=50,dz,dx1=0,dx3,d1;
GLfloat cc=0;
GLfloat cc1=.02;
#define M_PI 3.14
float ry=0.0;
int flag2=0;
int flag3,flag4,flag5,flag6,flag7,flag8,flag9,flag10,flag11,flag12,flag13;
char str[]= "LAKE SCENERY";
char str1[]= " BIT ";
char str2[]="Depertment Of Computer Science";
char str3[]="Computer Graphics Laboratory";
char str4[]="Under the guidence of ,";
char str5[]="MAMATHA V";
char str10[]="BHANUSHREE K J";
char str6[]="Submitted by,";
char str7[]="LIKITHA N ";
char str8[]="SHASHIKUMAR B ";
char str9[]=" press 's' to enter";
void stringdisplay(float a,float c,char *A)
LAKE SCENERY 1BI21CS404
Department of CS&E, BIT 2022-23 15
{
int j;
int len=0;
len=strlen(A)-1;
glRasterPos2f(a,c);
 for(j=0;j<=len;j++)
{
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,(int)A[j]);
}
}
void rain(float z)
{
 float x,y;
glColor3f(1,1,1);
glBegin(GL_LINES);
for(y=0;y<=700;y+=35)
{
for(x=0;x<=600;x+=20)
{
glVertex3f(-300+x+z,350-y,0);
glVertex3f(-300+x+z,340-y,0);
}
}
glEnd();
}
float dm=0,s=0,xm=0,run=0;
void key(unsigned char key,int x,int y)
{
if(key=='x')
{
 dm=dm+3;
 if(dm>=210)
 dm=210;
 glutPostRedisplay();
}
 if(key=='y')
{
 dm=dm-3;
 if(dm<=5) dm=5;
 glutPostRedisplay();
}
if(key=='s')
{
s=1;
}
if(key=='r')
{
if(flag2==1)
{ run=1;
}
}
}
float f1=20,f2=0,f3;
float b1=0,dm1=-200;
void man1()//fishing man
{
glColor3ub(0,0,0);
glPushMatrix();
glTranslatef(270,105,0);
glutSolidTorus(1,15,100,90);
glPopMatrix();
//draw nose eyebrow
glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2i(270,107);
glVertex2i(270,100);
glVertex2i(261,113);
glVertex2i(267,113);
glVertex2i(273,113);
glVertex2i(279,113);
glEnd();
// eyes
glBegin(GL_POLYGON);
glVertex2i(263,111);
glVertex2i(265,111);
glVertex2i(265,109);
glVertex2i(263,109);
glEnd();
glBegin(GL_POLYGON);
glVertex2i(275,111);
glVertex2i(277,111);
glVertex2i(277,109);
glVertex2i(275,109);
glEnd();
// mouth
glBegin(GL_POLYGON);
glVertex2i(266,97);
glVertex2i(270,95);
glVertex2i(274,97);
glVertex2i(270,95);
glEnd();
//fill face
glColor3ub(255,191,128);
glPushMatrix();
glTranslatef(270,105,0);
glutSolidTorus(7,7,100,90);
glPopMatrix();
// collar
glBegin(GL_POLYGON);
glColor3ub(200,140,110);
glVertex2i(259,90);
glVertex2i(281,90);
glVertex2i(276,80);
glVertex2i(264,80);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(20,140,110);
glVertex2i(270,87);
glVertex2i(275,80);
glVertex2i(265,80);
glEnd();
//shirt
glBegin(GL_POLYGON);
glColor3ub(30,60,90);
glVertex2i(259,90);
glVertex2i(281,90);
glVertex2i(296,79);
glVertex2i(291,71);
glVertex2i(286,75);
glVertex2i(286,55);
glVertex2i(254,55);
glVertex2i(254,75);
glVertex2i(249,70);
glVertex2i(244,79);
glEnd();
//hands
glBegin(GL_POLYGON);
glColor3ub(255,191,128);
glVertex2i(295,78);
glVertex2i(305,63);
glVertex2i(297,64);
glVertex2i(292,72);
glEnd();
glBegin(GL_POLYGON);
glVertex2i(305,63);
glVertex2i(286,48);
glVertex2i(286,55);
glVertex2i(297,64);
glEnd();
glBegin(GL_LINES);
glColor3f(0.0,0.0,0.0);
glVertex2i(286,55);
glVertex2i(340,55);
glEnd();
glBegin(GL_POINTS);
glColor3f(0.0,0.0,0.0);
 //glPointSize(250.0);
glVertex2i(340,55);
glEnd();
glBegin(GL_LINES);
glVertex2i(340,55);
glVertex2i(340,-22);
glEnd();
glBegin(GL_POLYGON);//fish body
glColor3f(0.256,1.0,0.693);
glVertex2i(335,-20);
glVertex2i(340,-25);
glVertex2i(345,-20);
 glVertex2i(350,-25);
glVertex2i(340,-70);
glVertex2i(330,-45);
glVertex2i(335,-15);
glEnd();
glBegin(GL_POLYGON);//back
glColor3f(0.6,0.8,0.5);
glVertex2i(340,-60);
glVertex2i(349,-75);
glVertex2i(332.5,-75);
glVertex2i(340,-60);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.6,0.8,0.5);//fin1
glVertex2i(330,-45);
glVertex2i(325,-60);
glVertex2i(332.5,-50);
glVertex2i(325,-60);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.6,0.8,0.5);//fin2
glVertex2i(350,-45);
glVertex2i(355,-60);
glVertex2i(347.5,-50);
glVertex2i(350,-45);
glEnd();
glBegin(GL_POINTS);
glColor3f(0.0,0.0,0.0);
glVertex2i(338.5,-30);
glEnd();
}
void drawhouse1()
{
glColor3f(.90,0.30,.30);
glBegin(GL_POLYGON);
glVertex2f(-180.0,-250.0);
glVertex2f(-170,-250);
glVertex2f(-170,-230);
glVertex2f(-180,-230);
glEnd();
glColor3f(1.,.4,0.4);
glBegin(GL_POLYGON);
glVertex2f(- 230.0,-250.0);
glVertex2f(-190,-250);
glVertex2f(-190,-210);
glVertex2f(-230,-210);
glEnd();
glColor3f(1.0,.8,0.8);
glBegin(GL_POLYGON);
glVertex2f(-190.0,-250.0);
glVertex2f(-160,-250);
glVertex2f(-160,-210);
glVertex2f(-190,-210);
glEnd();
}
int main(int argc, char ** argv)//main program
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitWindowSize(1000,600);
glutInitWindowPosition(0.0,0.0);
glutCreateWindow("village scenery");
glutDisplayFunc(mydisplay);
glutIdleFunc(IDLE);
glutKeyboardFunc(key);
glEnable(GL_DEPTH_TEST);
glMatrixMode(GL_PROJECTION);
glLoadIdentity ();
glOrtho(-300.0, 300.0, -300.0, 300.0, -300.0,300.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity ();
menu1();
glClearColor (1.0, 1.0, 1.0, 1.0);
glutMainLoop();
}