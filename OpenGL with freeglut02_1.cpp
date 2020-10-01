#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

static int width;
static int height;

static void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    /*
	//Row 1
	glViewport(150, 270, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);
	//Row 2
	glViewport(190, 220, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(0.0f, 1.0f, 1.0f);
    glutSolidTeapot(0.5);

	glViewport(110, 220, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(0.0f, 1.0f, 1.0f);
    glutSolidTeapot(0.5);
	//Row 3
    glViewport(150, 170, width/3, height/3); //Pink
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 0.0f, 1.0f);
    glutSolidTeapot(0.5);

	glViewport(80, 170, width/3, height/3); //Pink
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 0.0f, 1.0f);
    glutSolidTeapot(0.5);
	
	glViewport(220, 170, width/3, height/3); //Pink
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 0.0f, 1.0f);
    glutSolidTeapot(0.5);

	//Row 4
    glViewport(260, 120, width/3, height/3); //BLUE
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(0.0f, 0.0f, 1.0f);
    glutSolidTeapot(0.5);
	
	glViewport(190, 120, width/3, height/3); //BLUE
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(0.0f, 0.0f, 1.0f);
    glutSolidTeapot(0.5);
	
	glViewport(120, 120, width/3, height/3); //BLUE
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(0.0f, 0.0f, 1.0f);
    glutSolidTeapot(0.5);

	glViewport(50, 120, width/3, height/3); //BLUE
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(0.0f, 0.0f, 1.0f);
    glutSolidTeapot(0.5);

	// Row 5
    glViewport(280, 68, width/3, height/3);  //red
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 0.0f, 0.0f);
    glutSolidTeapot(0.5);
    
	glViewport(210, 68, width/3, height/3);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 0.0f, 0.0f);
    glutSolidTeapot(0.5);
	
	glViewport(140, 68, width/3, height/3);  //red
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 0.0f, 0.0f);
    glutSolidTeapot(0.5);
    
	glViewport(70, 68, width/3, height/3);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 0.0f, 0.0f);
    glutSolidTeapot(0.5);

	glViewport(0, 68, width/3, height/3);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 0.0f, 0.0f);
    glutSolidTeapot(0.5);

	//Row 6
    glViewport(300, 20, width/3, height/3); //YELLOW
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);

	glViewport(230, 20, width/3, height/3); //YELLOW
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);

	glViewport(160, 20, width/3, height/3); //YELLOW
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);

	glViewport(90, 20, width/3, height/3); //YELLOW
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);

	glViewport(20, 20, width/3, height/3); //YELLOW
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);

	glViewport(-48, 20, width/3, height/3); //YELLOW
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    glColor3f(1.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);
	*/
	
	//Circle
	
	/*
	glViewport(118, 270, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(-110, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);
	
	glViewport(65, 240, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(-130, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);
    
    glViewport(170, 258, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(-90, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);
	
	glViewport(220, 230, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(-50, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);
    
    glViewport(50, 180, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(-180, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);
    
	glViewport(220, 180, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(-0, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);
    
    glViewport(50, 130, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(-200, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);
    
	glViewport(205, 130, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(20, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);
	
	glViewport(105, 95, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(70, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);

	glViewport(160, 105, width/3, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(40, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidTeapot(0.5);
	*/
	
	glViewport(0, 105, width/4, height/3); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(0, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidCube(1);

	glViewport(40, 105, width/4, height/2.90); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -2.85, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(0, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidCube(1);	

	glViewport(80, 105, width/4, height/2.83); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -2.70, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(0, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidCube(1);	
	
	glViewport(120, 105, width/4, height/2.72); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -2.55, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(0, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidCube(1);	
    
    glViewport(160, 105, width/4, height/2.60); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -2.40, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(0, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidCube(1);

	glViewport(200, 105, width/4, height/2.52); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -2.32, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(0, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidCube(1);    
    
    glViewport(240, 105, width/4, height/2.34); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -2.15, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(0, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidCube(1);    
	
	glViewport(280, 105, width/4, height/2.22); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -2.05, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(0, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidCube(1);    

	glViewport(320, 105, width/4, height/2.15); 
    glLoadIdentity();
    gluLookAt(0.0, 0.0, -1.95, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	
    glRotatef(0, 0, 0, 1);
    glColor3f(0.0f, 1.0f, 0.0f);
    glutSolidCube(1); 
	
	glFlush();
}

static void reshape(int w, int h) {
    width = w;
    height = h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return EXIT_SUCCESS;
}
