#include<cstdio>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>

#define PI           3.14159265358979323846

GLfloat i = 0.0f;

void initGL()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}




GLfloat position = 0.0f;
GLfloat speed = 0.02f;

void update(int value) {

    if(position >1.0)
        position = -2.0f;

    position += speed;

    glutPostRedisplay();


    glutTimerFunc(100, update, 0);
}

void init() {
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}


void display() {
    glClearColor(0.5f, 0.5f, 0.5f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    /*glBegin(GL_LINES);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1.0, 0.0);
    glVertex2f(-1.0, 0.0);
    glVertex2f(0.0, 1.0);
    glVertex2f(0.0, -1.0);
    glEnd();*/

    gluOrtho2D(-2.0, +2.0, -1.5, 1.5);

    //Mid_Big_Pillar:
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.24, .0);
    glVertex2f(.24, 0.5);
    glVertex2f(.27, .86);
    glVertex2f(-.27, .86);
    glVertex2f(-.24, .5);
    glVertex2f(-.24, .0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.2, .04);
    glVertex2f(.2, 0.5);
    glVertex2f(-.2, .5);
    glVertex2f(-.2, .04);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.2, .5);
    glVertex2f(.24, 0.8);
    glVertex2f(-.24, .8);
    glVertex2f(-.2, .5);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(.2, .2);
    glVertex2f(-.2, 0.2);
    glVertex2f(.2, .33);
    glVertex2f(-.2, 0.33);
    glVertex2f(.2, 0.5);
    glVertex2f(-.2, 0.5);
    glVertex2f(.22, 0.64);
    glVertex2f(-.22, 0.64);

    glVertex2f(-.0, 0.02);
    glVertex2f(-.0, 0.8);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.2, .04);
    glVertex2f(.2, 0.5);

    glVertex2f(0.2, .5);
    glVertex2f(.24, 0.8);

    glVertex2f(.24, 0.8);
    glVertex2f(-.24, .8);

    glVertex2f(-.24, .8);
    glVertex2f(-.2, .5);

    glVertex2f(-.2, .5);
    glVertex2f(-.2, .04);

    glVertex2f(-.2, .04);
    glVertex2f(.2, .04);
    glEnd();

    int i;
    GLfloat x=.0 ;GLfloat y =.36; GLfloat radius = 0.28f;
    int triangleAmount = 10;
    GLfloat twicePi  = 2.0*PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0, .0, .0);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++)
    {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
    }
    glEnd();
    //glLoadIdentity();


    //Right_Pillar_1:
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.38, .0);
    glVertex2f(.64, 0.0);
    glVertex2f(.64, .56);
    glVertex2f(.38, .48);
    glVertex2f(.38, .0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(0.4, .02);
    glVertex2f(.6, 0.02);
    glVertex2f(.6, .54);
    glVertex2f(.4, .46);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.4, .02);
    glVertex2f(.6, 0.02);
    glVertex2f(.6, 0.02);
    glVertex2f(.6, .54);
    glVertex2f(.6, .54);
    glVertex2f(.4, .46);
    glVertex2f(.4, .46);
    glVertex2f(.4, .02);
    glVertex2f(.4, .02);
    glVertex2f(.6, .02);

    glVertex2f(.5, 0.02);
    glVertex2f(.5, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.4, .1);
    glVertex2f(.6, 0.2);
    glVertex2f(.6, 0.37);
    glVertex2f(.4, .28);
    glEnd();
    //Right_Pillar_2:
    glTranslatef(.4, .0, .0);
    glScalef(0.9, .9, 0);
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(0.38, .0);
    glVertex2f(.64, 0.0);
    glVertex2f(.64, .56);
    glVertex2f(.38, .48);
    glVertex2f(.38, .0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(0.4, .02);
    glVertex2f(.6, 0.02);
    glVertex2f(.6, .54);
    glVertex2f(.4, .46);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.4, .02);
    glVertex2f(.6, 0.02);
    glVertex2f(.6, 0.02);
    glVertex2f(.6, .54);
    glVertex2f(.6, .54);
    glVertex2f(.4, .46);
    glVertex2f(.4, .46);
    glVertex2f(.4, .02);
    glVertex2f(.4, .02);
    glVertex2f(.6, .02);

    glVertex2f(.5, 0.02);
    glVertex2f(.5, 0.5);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.4, .1);
    glVertex2f(.6, 0.2);
    glVertex2f(.6, 0.37);
    glVertex2f(.4, .28);
    glEnd();
    glLoadIdentity();

    //Left_Pillar1_1:
    glTranslatef(.05,.0,.0);
    glScalef(.58,.7,0);
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-0.38, .0);
    glVertex2f(-.38, 0.48);
    glVertex2f(-.64, .56);
    glVertex2f(-.64, .0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-0.6, .02);
    glVertex2f(-.4, 0.02);
    glVertex2f(-.4, .46);
    glVertex2f(-.6, .54);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.6, .02);
    glVertex2f(-.4, 0.02);
    glVertex2f(-.4, 0.02);
    glVertex2f(-.4, 0.46);
    glVertex2f(-.4, 0.46);
    glVertex2f(-.6, .52);
    glVertex2f(-.6, .52);
    glVertex2f(-.6, .02);
    glVertex2f(-.6, .02);
    glVertex2f(-.4, .02);

    glVertex2f(-.5, .02);
    glVertex2f(-.5, .5);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.6, .4);
    glVertex2f(-.4, 0.3);
    glVertex2f(-.6, 0.2);
    glVertex2f(-.4, .1);
    glEnd();

    //Left_Pillar_2:
    glTranslatef(-.34, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-0.38, .0);
    glVertex2f(-.38, 0.48);
    glVertex2f(-.64, .56);
    glVertex2f(-.64, .0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-0.6, .02);
    glVertex2f(-.4, 0.02);
    glVertex2f(-.4, .46);
    glVertex2f(-.6, .54);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.6, .02);
    glVertex2f(-.4, 0.02);
    glVertex2f(-.4, 0.02);
    glVertex2f(-.4, 0.46);
    glVertex2f(-.4, 0.46);
    glVertex2f(-.6, .52);
    glVertex2f(-.6, .52);
    glVertex2f(-.6, .02);
    glVertex2f(-.6, .02);
    glVertex2f(-.4, .02);

    glVertex2f(-.5, .02);
    glVertex2f(-.5, .5);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.6, .4);
    glVertex2f(-.4, 0.3);
    glVertex2f(-.6, 0.2);
    glVertex2f(-.4, .1);
    glEnd();
    glLoadIdentity();

    //Shiriguli:
    glScalef(-.9, 1, 0);
    glBegin(GL_QUADS);
    glColor3f(1.f, 0.4f, 0.5f);
    glVertex2f(-0.9, -0.1);
    glVertex2f(-.9, 0.0);
    glVertex2f(.9, 0.0);
    glVertex2f(.9, -.1);
    glEnd();
    glLoadIdentity();
    glTranslatef(0.0,-.1,0);
    glScalef(-1.02, 1, 0);
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.0f, 1.0f);
    glVertex2f(-0.9, -0.1);
    glVertex2f(-.9, 0.0);
    glVertex2f(.9, 0.0);
    glVertex2f(.9, -.1);
    glEnd();
    glLoadIdentity();
    glTranslatef(0, -.2, 0);
    glScalef(-1.08, 1, 0);
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-0.9, -0.1);
    glVertex2f(-.9, 0.0);
    glVertex2f(.9, 0.0);
    glVertex2f(.9, -.1);
    glEnd();
    glLoadIdentity();
    glLoadIdentity();


    //---->>Clouds
    glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
    glTranslatef(-.1, .79, 0);
    x=0.0 ; y =0.0 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
   glColor3f(0.0, 1.0, 1.0);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();
    x=0.1 ; y =0.0 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
   glColor3f(0.0, 1.0, 1.0);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();
   x=0.03 ; y =0.09 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();
   glLoadIdentity();

   glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
   glTranslatef(-.87, .78, 0);
     x=0.0 ; y =0.0 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
   glColor3f(0.0, 1.0, 1.0);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();

    x=0.1 ; y =0.0 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
   glColor3f(0.0, 1.0, 1.0);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();
   x=0.03 ; y =0.09 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();
   glLoadIdentity();

  glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
   glTranslatef(.8, .79, 0);
     x=0.0 ; y =0.0 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
   glColor3f(0.0, 1.0, 1.0);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();

    x=0.1 ; y =0.0 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
   glColor3f(0.0, 1.0, 1.0);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();
   x=0.03 ; y =0.09 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();
   glLoadIdentity();

  glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
   glTranslatef(.4, .7, 0);
     x=0.0 ; y =0.0 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
   glColor3f(0.0, 1.0, 1.0);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();

    x=0.1 ; y =0.0 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
   glColor3f(0.0, 1.0, 1.0);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();
   x=0.03 ; y =0.09 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();
   glLoadIdentity();
   glPopMatrix();


   //Path:
    glTranslatef(.0, -.9, 0);
    glScalef(1.5,.7,0);
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.7, 0.6);
    glVertex2f(-.9, .2);
    glVertex2f(-.9, -.4);
    glVertex2f(-.6, -.1);
    glVertex2f(-.8, -.3);
    glVertex2f(.2, .0);
    glVertex2f(.1, -.2);
    glVertex2f(.8, .0);
    glVertex2f(.7, -.3);
    glVertex2f(.9, 0.0);
    glVertex2f(.9, .5);
    glVertex2f(.3, .4);
    glVertex2f(.4, .6);
    glVertex2f(-.5, .3);
    glVertex2f(-.4, .5);
    glVertex2f(-.9, .2);
    glVertex2f(-.9, -.4);
    glEnd();
    glLoadIdentity();

    //Aeroplane:
    glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
    glTranslatef(-.47, .79, 0);
    glScalef(.28,.28,0);
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-.6, .2);
    glVertex2f(-.6, -0.2);
    glVertex2f(0.6, -0.2);
    glVertex2f(0.6, 0.2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.1, 1.0);
    glVertex2f(.6, .0);
    glVertex2f(.9, .0);
    glVertex2f(.9, .1);
    glVertex2f(.6, .2);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.1, 1.0);
    glVertex2f(.6, .0);
    glVertex2f(.6, -.2);
    glVertex2f(.9, .0);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.1, 1.0);
    glVertex2f(.0, .2);
    glVertex2f(-.2, .4);
    glVertex2f(-.1, .5);
    glVertex2f(.2, .2);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.1, 1.0);
    glVertex2f(.1, -.1);
    glVertex2f(-.1, -.3);
    glVertex2f(.0, -.4);
    glVertex2f(.3, -.1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0, 0.1, 1.0);
    glVertex2f(-.6, .2);
    glVertex2f(-.6, .4);
    glVertex2f(-.4, .4);
    glVertex2f(-.2, .2);
    glEnd();
    i;
    x=-0.4 ; y =-0.25;radius = 0.1f;
    triangleAmount = 10;
    twicePi  = 2.0*PI;

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++)
    {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
    }
    glEnd();

    x=-0.2; y =-0.25;  radius = 0.1f;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<=triangleAmount;i++)
    {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
    }
    glEnd();

   x=0.3 ; y =-0.25 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();

    x=0.5 ; y =-0.25 ;  radius = 0.1f;
   glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();
   glLoadIdentity();

   //Trees
    glTranslatef(.02f, -0.67f, 0.0f);
    glScalef(.4,.5,0);
    glBegin(GL_QUADS);
    glColor3f(0.0, .0, .0);
    glVertex2f(.0, .0);
    glVertex2f(.0, .3);
    glVertex2f(-.2, .3);
    glVertex2f(-.2, .0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(.0, .2);
    glVertex2f(.1, .3);
    glVertex2f(0.1, .4);
    glVertex2f(.2, .5);
    glVertex2f(.0, .6);
    glVertex2f(-.5, .6);
    glVertex2f(-.4, .4);
    glVertex2f(-.4, .3);
    glVertex2f(-.3, .2);
    glVertex2f(.0, .2);
    glEnd();
    glLoadIdentity();
    glTranslatef(-.9f, -0.7f, 0.0f);
    glScalef(.24,.3,0);
    glBegin(GL_QUADS);
    glColor3f(0.0, .0, .0);
    glVertex2f(.0, .0);
    glVertex2f(.0, .3);
    glVertex2f(-.2, .3);
    glVertex2f(-.2, .0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(.0, .2);
    glVertex2f(.1, .3);
    glVertex2f(0.1, .4);
    glVertex2f(.2, .5);
    glVertex2f(.0, .6);
    glVertex2f(-.5, .6);
    glVertex2f(-.4, .4);
    glVertex2f(-.4, .3);
    glVertex2f(-.3, .2);
    glVertex2f(.0, .2);
    glEnd();
    glLoadIdentity();

    glTranslatef(.9f, -0.65f, 0.0f);
    glScalef(.4,.5,0);
    glBegin(GL_QUADS);
    glColor3f(0.0, .0, .0);
    glVertex2f(.0, .0);
    glVertex2f(.0, .3);
    glVertex2f(-.2, .3);
    glVertex2f(-.2, .0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(.0, .2);
    glVertex2f(.1, .3);
    glVertex2f(0.1, .4);
    glVertex2f(.2, .5);
    glVertex2f(.0, .6);
    glVertex2f(-.5, .6);
    glVertex2f(-.4, .4);
    glVertex2f(-.4, .3);
    glVertex2f(-.3, .2);
    glVertex2f(.0, .2);
    glEnd();
    glLoadIdentity();


    //A_Bus:
    glPushMatrix();
    //glTranslatef(position,0.1f, 0.1f);
    glTranslatef(position,0.1f,0.1f);
    glTranslatef(.8, -.8,0);
    glScalef(-.2,.2,0);
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-.7, .6);
    glVertex2f(-.95, .1);
    glVertex2f(-0.9, -.3);
    glVertex2f(-.7, -.4);
    glVertex2f(.8, -.4);
    glVertex2f(.9, -.3);
    glVertex2f(.9, .5);
    glVertex2f(.8, .6);
    glVertex2f(-.7, .6);
    glEnd();

   x=-0.1 ; y =-0.4; radius = 0.2f;
   triangleAmount = 10;
   twicePi  = 2.0*PI;

   glBegin(GL_TRIANGLE_FAN);
   glColor3f(0.0, 0.0, 0.0);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();
   x=-0.1; y =-0.4;  radius = 0.14f;
   glBegin(GL_TRIANGLE_FAN);
   glColor3f(0.0, 0.5, 0.5);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();

    x=0.6; y =-0.4;  radius = 0.2f;
   glBegin(GL_TRIANGLE_FAN);
   glColor3f(0.0, 0.0, 0.0);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();
   x=0.6; y =-0.4;  radius = 0.14f;
   glBegin(GL_TRIANGLE_FAN);
   glColor3f(0.0, 0.5, 0.5);
    glVertex2f(x,y);
   for(i=0;i<=triangleAmount;i++)
   {
       glVertex2f(
                  x+(radius*cos(i*twicePi/triangleAmount)),
                  y+(radius*sin(i*twicePi/triangleAmount))

                  );
   }
   glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(-.8, .5);
    glVertex2f(-.7, .6);
    glVertex2f(-0.7, .1);
    glVertex2f(-.95, .1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-.9, -.3);
    glVertex2f(-.9, -.4);
    glVertex2f(-.7, -.4);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.5,0.5);
    glVertex2f(-.6, .4);
    glVertex2f(-.6, -.2);
    glVertex2f(-0.5, -.3);
    glVertex2f(-.4, -.3);
    glVertex2f(-.3, -.2);
    glVertex2f(-.3, .4);
    glVertex2f(-.4, .5);
    glVertex2f(-.5, .5);
    glVertex2f(-.6, .4);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-.45, .5);
    glVertex2f(-.45, -.3);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-.1, .53);
    glVertex2f(-.23, .4);
    glVertex2f(-.23, .2);
    glVertex2f(-.1, .07);
    glVertex2f(.7, 0.07);
    glVertex2f(.83, .2);
    glVertex2f(.83, .4);
    glVertex2f(.7, .53);
    glVertex2f(-.1, .53);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-.1, .5);
    glVertex2f(-.2, .4);
    glVertex2f(-.2, .2);
    glVertex2f(-.1, .1);
    glVertex2f(.7, 0.1);
    glVertex2f(.8, .2);
    glVertex2f(.8, .4);
    glVertex2f(.7, .5);
    glVertex2f(-.1, .5);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(0.0, .1);
    glVertex2f(0.0, .5);

    glVertex2f(.2, .1);
    glVertex2f(.2, .5);

    glVertex2f(.4, .1);
    glVertex2f(.4, .5);

    glVertex2f(.6, .1);
    glVertex2f(.6, .5);
    glEnd();
    glLoadIdentity();
    glPopMatrix();



    glFlush();  // Render now
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(display);
   init();

   glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}

