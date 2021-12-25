#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

void init(void)
{
    glClearColor(1.0,1.0,1.0,1.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    glOrtho(-150, 150.0, -150.0, 150.0, -150.0, 150.0);
}

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    float theta;
    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    for(int i = 0; i<360; i++)
    {
        theta = i*3.142/180.0;
        glVertex3f(25*cos(theta)+22.5, 25*sin(theta), 0);
    }
    glEnd();
    glColor3f (0.3,0.2,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(-95,-95);
    glVertex2d(-65,-30);
    glVertex2d(115,-30);
    glVertex2d(85,-95);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(-55,-40);
    glVertex2d(-55,20);
    glVertex2d(-50,20);
    glVertex2d(-50,-40);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(-50,15);
    glVertex2d(-50,20);
    glVertex2d(-40,20);
    glVertex2d(-40,15);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(-40,-40);
    glVertex2d(-40,20);
    glVertex2d(-35,20);
    glVertex2d(-35,-40);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(-25,-40);
    glVertex2d(-25,35);
    glVertex2d(-20,35);
    glVertex2d(-20,-40);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(-20,30);
    glVertex2d(-20,35);
    glVertex2d(-10,35);
    glVertex2d(-10,30);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(-10,-40);
    glVertex2d(-10,35);
    glVertex2d(-5,35);
    glVertex2d(-5,-40);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(5,-40);
    glVertex2d(5,45);
    glVertex2d(10,45);
    glVertex2d(10,-40);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(5,45);
    glVertex2d(0,65);
    glVertex2d(5,65);
    glVertex2d(10,45);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(5,60);
    glVertex2d(5,65);
    glVertex2d(20,65);
    glVertex2d(20,60);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(20,60);
    glVertex2d(20,65);
    glVertex2d(30,65);
    glVertex2d(32,60);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(35,45);
    glVertex2d(30,65);
    glVertex2d(35,65);
    glVertex2d(40,45);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(20,45);
    glVertex2d(15,65);
    glVertex2d(20,65);
    glVertex2d(25,45);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(10,40);
    glVertex2d(10,45);
    glVertex2d(20,45);
    glVertex2d(20,40);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(20,-40);
    glVertex2d(20,45);
    glVertex2d(25,45);
    glVertex2d(25,-40);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(25,40);
    glVertex2d(25,45);
    glVertex2d(35,45);
    glVertex2d(35,40);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(35,-40);
    glVertex2d(35,45);
    glVertex2d(40,45);
    glVertex2d(40,-40);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(50,-40);
    glVertex2d(50,35);
    glVertex2d(55,35);
    glVertex2d(55,-40);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(55,30);
    glVertex2d(55,35);
    glVertex2d(65,35);
    glVertex2d(65,30);
    glEnd();


    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(65,-40);
    glVertex2d(65,35);
    glVertex2d(70,35);
    glVertex2d(70,-40);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(80,-40);
    glVertex2d(80,20);
    glVertex2d(85,20);
    glVertex2d(85,-40);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(85,15);
    glVertex2d(85,20);
    glVertex2d(95,20);
    glVertex2d(95,15);
    glEnd();

    glColor3f (0.1,0.1,0.1);
    glBegin(GL_POLYGON);
    glVertex2d(95,-40);
    glVertex2d(95,20);
    glVertex2d(100,20);
    glVertex2d(100,-40);
    glEnd();
    glutSwapBuffers();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(100,100);
    glutInitWindowSize(700,700);
    glutCreateWindow("Task 7 ID: 182-15-2111");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
