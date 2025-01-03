#include <GL/glut.h>

void blackbox()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);

//Big box
   glVertex2f(270, 60);    // Bottom-left corner
    glVertex2f(780, 60);    // Bottom-right corner
    glVertex2f(780, 660);   // Top-right corner
    glVertex2f(270, 660);   // Top-left corner

    // right side curve
    for (int x = 780, y = 90; x < 990; x += 30, y += 30)
    {
        glVertex2f(x, y);
        glVertex2f(x + 30, y);
        glVertex2f(x + 30, 720 - y);
        glVertex2f(x, 720 - y);
    }

    //  left side curve
    for (int x = 270, y = 90; x > 60; x -= 30, y += 30)
    {
        glVertex2f(x, 720 - y);
        glVertex2f(x - 30, 720 - y);
        glVertex2f(x - 30, y);
        glVertex2f(x, y);
    }

    glEnd();
}
void lines()
{
    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3f(0.98f, 0.037f, 0.77f);

    // Vertical  lines
    for (int x = 0; x <= 1020; x += 30)
    {
        glVertex2f(x, 0);
        glVertex2f(x, 720);
    }

    // Horizontal lines
    for (int y = 0; y <= 720; y += 30)
    {
        glVertex2f(0, y);
        glVertex2f(1020, y);
    }

    glEnd();
}
void yellow() {
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
//top right yellow curve
    for (int x = 780, y = 600; x < 930; x += 30, y -= 30)
    {
        glVertex2f(x, y);
        glVertex2f(x + 30, y);
        glVertex2f(x + 30, y-60);
        glVertex2f(x, y-60);
    }
    //bottom right yellow curve
    for (int x = 780, y = 120; x < 930; x += 30, y += 30)
    {
        glVertex2f(x, y);
        glVertex2f(x + 30, y);
        glVertex2f(x + 30, y+60);
        glVertex2f(x, y+60);
    }

     //bottom left yellow curve
 for (int x = 270, y = 120; x > 120; x -= 30, y += 30)
    {
        glVertex2f(x, y);
        glVertex2f(x - 30, y);
        glVertex2f(x - 30, y+60);
        glVertex2f(x, y+60);
    }
  //up left yellow curve
 for (int x = 270, y = 600; x > 120; x -= 30, y -= 30)
    {
        glVertex2f(x, y);
        glVertex2f(x - 30, y);
        glVertex2f(x - 30, y-60);
        glVertex2f(x, y-60);
    }
//left quads
glVertex2f(90,270);
glVertex2f(120,270);
glVertex2f(120,450);
glVertex2f(90,450);
//right quads
glVertex2f(930,270);
glVertex2f(960,270);
glVertex2f(960,450);
glVertex2f(930,450);
glEnd();
 //bottom quads
 glBegin(GL_POLYGON);
        glVertex2f(270,90);
        glVertex2f(780,90);
        glVertex2f(780,120);
        glVertex2f(330,120);
        glVertex2f(330,150);
        glVertex2f(270,150);
        glVertex2f(270,90);
        glEnd();
         //BOTTOM SMALL 2bQUARDS
     glBegin(GL_QUADS);
     glVertex2f(780,120);
     glVertex2f(780,150);
     glVertex2f(720,150);
     glVertex2f(720,120);
    glEnd();

    //bottom left statue
        glBegin(GL_QUADS);
          glVertex2f(390,120);
          glVertex2f(390,210);
          glVertex2f(480,210);
          glVertex2f(480,120);

          glVertex2f(360,120);
          glVertex2f(360,180);
          glVertex2f(390,180);
          glVertex2f(390,120);

          glVertex2f(420,210);
          glVertex2f(420,240);
          glVertex2f(450,240);
          glVertex2f(450,210);

          glVertex2f(480,150);
          glVertex2f(510,150);
          glVertex2f(510,120);
          glVertex2f(480,120);

//bottom right statue
          glVertex2f(540,120);
          glVertex2f(540,150);//small right  1box q
          glVertex2f(570,150);
          glVertex2f(570,120);

         glVertex2f(570,120);
          glVertex2f(570,210);//big q
          glVertex2f(660,210);
          glVertex2f(660,120);

          glVertex2f(360+300,120);//right small 2boxq
         glVertex2f(360+300,180);
          glVertex2f(390+300,180);
          glVertex2f(390+300,120);

         glVertex2f(420+180,210);//up right 1 boxq
          glVertex2f(420+180,240);
          glVertex2f(450+180,240);
          glVertex2f(450+180,210);

//upper quads

 glVertex2f(270,600);//up hor
 glVertex2f(780,600);
 glVertex2f(780,630);
 glVertex2f(270,630);
 //upper small three quard
for (int i = 0; i < 3; ++i) {
    int offset = i * 210;
    glVertex2f(270 + offset, 600);
    glVertex2f(360 + offset, 600);
    glVertex2f(360 + offset, 570);
    glVertex2f(270 + offset, 570);
}
//  upper statue left and right
for (int i = 0; i < 2; ++i) {
    int offset = i * 240;
    glVertex2f(360 + offset, 600);
    glVertex2f(450 + offset, 600);
    glVertex2f(450 + offset, 450);
    glVertex2f(360 + offset, 450);
}
//two upper small q
for (int i = 0; i < 2; ++i) {
    int offset = i * 360;
    glVertex2f(330 + offset, 540);
    glVertex2f(360 + offset, 540);
    glVertex2f(360 + offset, 450);
    glVertex2f(330 + offset, 450);
}
//  two upper top
for (int i = 0; i < 2; ++i) {
    int offset = i * 270;
    glVertex2f(360 + offset, 450);
    glVertex2f(420 + offset, 450);
    glVertex2f(420 + offset, 420);
    glVertex2f(360 + offset, 420);

}
    glEnd();

}
void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    gluOrtho2D(0, 1020, 0, 720);
    blackbox();
    yellow();
     lines();
    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1020, 720);
    glutInitWindowPosition(0, 0);   // Window position
    glutCreateWindow("BatMan Logo"); // Create window with title
    glutDisplayFunc(display);        // Register display callback
    glutMainLoop();                  // Enter the event-processing loop
    return 0;
}
