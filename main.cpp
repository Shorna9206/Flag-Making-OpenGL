#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void init(void) {
    glClearColor(1.0, 1.0, 1.0,1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 2.5, 0.0, 2.5);
}
void lineSegment(void) {

    float theta;
    float posX = 1.6;
    float posY = 1.935;
    float radio = 0.09;
    glClear(GL_COLOR_BUFFER_BIT);

    //bottom part
    glColor3f (0.9, 0.6, 0.1);
    glBegin(GL_POLYGON);
    glVertex3f (0.2, 0.2, 0.0);
    glVertex3f (0.7, 0.2, 0.0);
    glVertex3f ( 0.7, 0.3, 0.0);
    glVertex3f ( 0.2, 0.3, 0.0);
    glEnd();
    glColor3f (0.6, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (0.1, 0.1, 0.0);
    glVertex3f (0.8, 0.1, 0.0);
    glVertex3f ( 0.8, 0.2, 0.0);
    glVertex3f ( 0.1, 0.2, 0.0);
    glEnd();

    //grass
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (0.85, 0.1, 0.0);
    glVertex3f (0.9, 0.1, 0.0);
    glVertex3f ( 0.875, 0.3, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (0.9, 0.1, 0.0);
    glVertex3f (0.95, 0.1, 0.0);
    glVertex3f ( 0.925, 0.3, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (0.95, 0.1, 0.0);
    glVertex3f (1.00, 0.1, 0.0);
    glVertex3f ( 0.975, 0.2, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.00, 0.1, 0.0);
    glVertex3f (1.05, 0.1, 0.0);
    glVertex3f ( 1.025, 0.25, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.05, 0.1, 0.0);
    glVertex3f (1.1, 0.1, 0.0);
    glVertex3f ( 1.075, 0.32, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.1, 0.1, 0.0);
    glVertex3f (1.15, 0.1, 0.0);
    glVertex3f ( 1.125, 0.27, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.1, 0.1, 0.0);
    glVertex3f (1.15, 0.1, 0.0);
    glVertex3f ( 1.0, 0.27, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.15, 0.1, 0.0);
    glVertex3f (1.20, 0.1, 0.0);
    glVertex3f ( 1.175, 0.40, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.20, 0.1, 0.0);
    glVertex3f (1.25, 0.1, 0.0);
    glVertex3f ( 1.225, 0.30, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.20, 0.1, 0.0);
    glVertex3f (1.25, 0.1, 0.0);
    glVertex3f ( 1.55, 0.40, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.25, 0.1, 0.0);
    glVertex3f (1.30, 0.1, 0.0);
    glVertex3f ( 1.2755, 0.27, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.30, 0.1, 0.0);
    glVertex3f (1.35, 0.1, 0.0);
    glVertex3f ( 1.325, 0.20, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.35, 0.1, 0.0);
    glVertex3f (1.40, 0.1, 0.0);
    glVertex3f ( 1.375, 0.30, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.40, 0.1, 0.0);
    glVertex3f (1.45, 0.1, 0.0);
    glVertex3f ( 1.425, 0.25, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.45, 0.1, 0.0);
    glVertex3f (1.50, 0.1, 0.0);
    glVertex3f ( 1.475, 0.27, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.50, 0.1, 0.0);
    glVertex3f (1.55, 0.1, 0.0);
    glVertex3f ( 1.75, 0.35, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.50, 0.1, 0.0);
    glVertex3f (1.55, 0.1, 0.0);
    glVertex3f ( 1.525, 0.35, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.55, 0.1, 0.0);
    glVertex3f (1.60, 0.1, 0.0);
    glVertex3f ( 1.575, 0.27, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.60, 0.1, 0.0);
    glVertex3f (1.65, 0.1, 0.0);
    glVertex3f ( 1.625, 0.2, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.65, 0.1, 0.0);
    glVertex3f (1.70, 0.1, 0.0);
    glVertex3f ( 1.675, 0.3, 0.0);
    glEnd();
    glColor3f (0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f (1.70, 0.1, 0.0);
    glVertex3f (1.75, 0.1, 0.0);
    glVertex3f ( 1.725, 0.25, 0.0);
    glEnd();

    //stand
    glColor3f (0.5,0.6,0.7);
    glBegin(GL_POLYGON);
    glVertex3f (0.43, 0.3, 0.0);
    glVertex3f (0.47, 0.3, 0.0);
    glVertex3f ( 0.47, 2.4, 0.0);
    glVertex3f ( 0.43, 2.4, 0.0);
    glEnd();

    //body
    glColor3f (0.6,0.0,0.6);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 1.55, 0.0);
    glVertex3f (1.8, 1.55, 0.0);
    glVertex3f ( 1.8, 2.32, 0.0);
    glVertex3f ( 0.47, 2.32, 0.0);
    glEnd();

    //inner line
    glColor3f (1,0.6,0);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 1.55, 0.0);
    glVertex3f (1.8, 1.55, 0.0);
    glVertex3f ( 1.8, 1.62, 0.0);
    glVertex3f ( 0.47, 1.62, 0.0);
    glEnd();
    glColor3f (1,0.7,0.3);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 1.62, 0.0);
    glVertex3f (1.8, 1.62, 0.0);
    glVertex3f ( 1.8, 1.69, 0.0);
    glVertex3f ( 0.47, 1.69, 0.0);
    glEnd();
    glColor3f (1,0.7,0.7);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 1.69, 0.0);
    glVertex3f (1.8, 1.69, 0.0);
    glVertex3f ( 1.8, 1.76, 0.0);
    glVertex3f ( 0.47, 1.76, 0.0);
    glEnd();
    glColor3f (1,0.8,1.0);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 1.76, 0.0);
    glVertex3f (1.8, 1.76, 0.0);
    glVertex3f ( 1.8, 1.83, 0.0);
    glVertex3f ( 0.47, 1.83, 0.0);
    glEnd();
    glColor3f (1,0,0);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 1.55, 0.0);
    glVertex3f (0.77, 1.55, 0.0);
    glVertex3f ( 0.77, 1.62, 0.0);
    glVertex3f ( 0.47, 1.62, 0.0);
    glEnd();

    //inner triangle
    glColor3f (0.4,0.9,0.9);
    glBegin(GL_POLYGON);
    glVertex3f (0.77, 1.55, 0.0);
    glVertex3f (1.3, 1.935, 0.0);
    glVertex3f ( 0.77, 2.32, 0.0);
    glEnd();
    glColor3f (0.4,0.7,1);
    glBegin(GL_POLYGON);
    glVertex3f (0.67, 1.55, 0.0);
    glVertex3f (1.2, 1.935, 0.0);
    glVertex3f ( 0.67, 2.32, 0.0);
    glEnd();
    glColor3f (0.4,0.4,1);
    glBegin(GL_POLYGON);
    glVertex3f (0.57, 1.55, 0.0);
    glVertex3f (1.1, 1.935, 0.0);
    glVertex3f ( 0.57, 2.32, 0.0);
    glEnd();

    //BD flag
    glColor3f (0,1,0);
    glBegin(GL_POLYGON);
    glVertex3f (1.4, 1.83, 0.0);
    glVertex3f (1.8, 1.83, 0.0);
    glVertex3f ( 1.8, 2.04, 0.0);
    glVertex3f ( 1.4, 2.04, 0.0);
    glEnd();


    //lines
    glColor3f (0.8,0.0,0.7);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 2.25, 0.0);
    glVertex3f (1.8, 2.25, 0.0);
    glVertex3f ( 1.8, 2.32, 0.0);
    glVertex3f ( 0.47, 2.32, 0.0);
    glEnd();
    glColor3f (0.8,0.3,1);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 2.18, 0.0);
    glVertex3f (1.8, 2.18, 0.0);
    glVertex3f ( 1.8, 2.25, 0.0);
    glVertex3f ( 0.47, 2.25, 0.0);
    glEnd();
    glColor3f (0.8,0.6,1);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 2.11, 0.0);
    glVertex3f (1.8, 2.11, 0.0);
    glVertex3f ( 1.8, 2.18, 0.0);
    glVertex3f ( 0.47, 2.18, 0.0);
    glEnd();
    glColor3f (0.9,0.8,0.9);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 2.04, 0.0);
    glVertex3f (1.8, 2.04, 0.0);
    glVertex3f ( 1.8, 2.11, 0.0);
    glVertex3f ( 0.47, 2.11, 0.0);
    glEnd();

    //triangle
    glColor3f (0,0,1);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 1.55, 0.0);
    glVertex3f (1.0, 1.935, 0.0);
    glVertex3f ( 0.47, 2.32, 0.0);
    glEnd();
    glColor3f (1,1,0);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 1.65, 0.0);
    glVertex3f (0.9, 1.935, 0.0);
    glVertex3f ( 0.47, 2.22, 0.0);
    glEnd();
    glColor3f (0.9,0.4,0.1);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 1.75, 0.0);
    glVertex3f (0.8, 1.935, 0.0);
    glVertex3f ( 0.47, 2.12, 0.0);
    glEnd();
    glColor3f (0.4,0.8,1);
    glBegin(GL_POLYGON);
    glVertex3f (0.47, 1.85, 0.0);
    glVertex3f (0.7, 1.935, 0.0);
    glVertex3f ( 0.47, 2.02, 0.0);
    glEnd();





    glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++){
        theta = i*3.1416/180;
        glVertex2f(posX + radio*cos(theta), posY + radio*sin(theta));
    }
    glEnd();
    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("Flag Draw");
    init();
    glutDisplayFunc(lineSegment);
    glutMainLoop();
}
