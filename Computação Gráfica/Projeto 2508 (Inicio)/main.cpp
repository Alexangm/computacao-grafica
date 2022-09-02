#define GLUT_DISABLE_ATEXIT_HACK
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <time.h>

// Fun��o callback para desenho
void desenha(void)
{

    // Inicializa o sistema de coordenadas
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // Define os limites dos eixos x e y
    // Argumentos da fun��o: void gluOrtho2D(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top)
    gluOrtho2D (0.0f, 1500.0f, 0.0f, 650.0f);  // (xo, x, yo, y)

	//Limpa todos os pixels com a cor de fundo
	glClear(GL_COLOR_BUFFER_BIT);

	//Configura a cor
    //glColor3f (1.0, 1.0, 1.0); // RGB

    glBegin(GL_QUADS); // fundo de c�u
        glColor3ub(100, 150, 255);//rand()%255, rand()%255, rand()%255);
        glVertex2i(0, 650);
        glVertex2i(1500, 650);
        glColor3ub(255, 150, 100);
        glVertex2i(1500, 0);
        glVertex2i(0, 0);
    glEnd();

    glBegin(GL_QUADS); // fran�a
        glColor3ub(0, 0, 255);
        glVertex2i(5, 645);
        glVertex2i(168, 645);
        glVertex2i(168, 330);
        glVertex2i(5, 330);

        glColor3ub(255, 255, 255);
        glVertex2i(168, 645);
        glVertex2i(337, 645);
        glVertex2i(337, 330);
        glVertex2i(168, 330);

        glColor3ub(255, 0, 0);
        glVertex2i(337, 645);
        glVertex2i(495, 645);
        glVertex2i(495, 330);
        glVertex2i(337, 330);
    glEnd();

    glBegin(GL_QUADS); // kuwait
        glColor3ub(0, 0, 0);
        glVertex2i(505, 645);
        glVertex2i(626, 540);
        glVertex2i(626, 435);
        glVertex2i(505, 330);

        glColor3ub(0, 150, 0);
        glVertex2i(505, 645);
        glVertex2i(626, 540);
        glVertex2i(995, 540);
        glVertex2i(995, 645);

        glColor3ub(255, 255, 255);
        glVertex2i(626, 540);
        glVertex2i(626, 435);
        glVertex2i(995, 435);
        glVertex2i(995, 540);

        glColor3ub(200, 0, 0);
        glVertex2i(626, 435);
        glVertex2i(505, 330);
        glVertex2i(995, 330);
        glVertex2i(995, 435);
    glEnd();

    glBegin(GL_QUADS); // rep tcheca
        glColor3ub(255, 255, 255);
        glVertex2i(5, 320);
        glVertex2i(495, 320);
        glVertex2i(495, 157);
        glVertex2i(245, 157);

        glColor3ub(0, 0, 255);
        glVertex2i(5, 320);
        glVertex2i(245, 157);
        glVertex2i(5, 5);
        glVertex2i(5, 320);

        glColor3ub(255, 0, 0);
        glVertex2i(245, 157);
        glVertex2i(5, 5);
        glVertex2i(495, 5);
        glVertex2i(495, 157);
    glEnd();

    glBegin(GL_QUADS); // grecia
        glColor3ub(255, 255, 255);
        glVertex2i(505, 320);
        glVertex2i(995, 320);
        glVertex2i(995, 5);
        glVertex2i(505, 5);

        for(int y=5;y<320;y+=35){
            if (y%2!=0) glColor3ub(0, 0, 255);
            else glColor3ub(255, 255, 255);
            glVertex2i(505, y+35);
            glVertex2i(995, y+35);
            glVertex2i(995, y);
            glVertex2i(505, y);
        }

        glColor3ub(0, 0, 255);
        glVertex2i(505, 320);
        glVertex2i(669, 320);
        glVertex2i(669, 145);
        glVertex2i(505, 145);

        glColor3ub(255, 255, 255);
        glVertex2i(505, 215);
        glVertex2i(669, 215);
        glVertex2i(669, 250);
        glVertex2i(505, 250);

        glColor3ub(255, 255, 255);
        glVertex2i(569, 320);
        glVertex2i(604, 320);
        glVertex2i(604, 145);
        glVertex2i(569, 145);
    glEnd();

    glBegin(GL_QUADS); // eua
        glColor3ub(255, 0, 0);
        glVertex2i(1005, 330);
        glVertex2i(1495, 330);
        glVertex2i(1495, 645);
        glVertex2i(1005, 645);
        int x = 0;
        for(float y=330; y<620; y+=315/13){
            if(x%2==0) glColor3ub(255, 0, 0);
            else glColor3ub(255, 255, 255);
            x++;
            glVertex2f(1005, y);
            glVertex2f(1495, y);
            glVertex2f(1495, y+315/13);
            glVertex2f(1005, y+315/13);
        }

        glColor3ub(0, 0, 255);
        glVertex2i(1005, 645);
        glVertex2i(1201, 645);
        glVertex2i(1201, 474);
        glVertex2i(1005, 474);

        glColor3ub(0, 0, 0);
    glEnd();

    glColor3ub(255, 255, 255);
    for(int x=1009; x<1201; x+=32){
        for(int y=645; y>498; y-=34){
            glBegin(GL_POLYGON);
                glVertex2f(x+13.0, y-15.0);
                glVertex2f(x+14.0, y-6);
                glVertex2f(x+04.2, y-26);
                glVertex2f(x+25.0, y-15.2);
                glVertex2f(x-1.00, y-15.2);
                glVertex2f(x+19.8, y-26);
            glEnd();
        }
    }

    for(int x=1024; x<1180; x+=32){
        for(int y=630; y>509; y-=34){
            glBegin(GL_POLYGON);
                glVertex2f(x+13.0, y-15.0);
                glVertex2f(x+14.0, y-6);
                glVertex2f(x+04.2, y-26);
                glVertex2f(x+25.0, y-15.2);
                glVertex2f(x-1.00, y-15.2);
                glVertex2f(x+19.8, y-26);
            glEnd();
        }
    }



    glBegin(GL_QUADS); // africa do sul
        glColor3ub(0, 0, 0);
        glVertex2i(1005, 5);
        glVertex2i(1495, 5);
        glVertex2i(1495, 320);
        glVertex2i(1005, 320);
    glEnd();



	//Habilita a execu��o de comandos OpenGL
	glFlush();
}

//Inicializa par�metros
void init (void)
{
    // Configura a cor de fundo como preta
    glClearColor(0.9f, 0.8f, 0.99f, 1.0f);
}

//Principal
int main(void)
{
    srand(time(NULL));
    //Tipo de janela (single-buffered) e cores utilizados
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	//Configura o tamanho da janela
	glutInitWindowSize (1350, 650);
	//Configura a posi��o inicial da janela
	glutInitWindowPosition (0, 50);

	//Configura a janela
	glutCreateWindow("Teste do OpenGL");
	//Chama a fun��o desenha
	glutDisplayFunc(desenha);
	//Inicializa o programa
	init();
	//Habilita o loop (m�quina de estados)
	glutMainLoop();
}



/*
#define GLUT_DISABLE_ATEXIT_HACK
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <time.h>

// Fun��o callback para desenho
void desenha(void)
{

    // Inicializa o sistema de coordenadas
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // Define os limites dos eixos x e y
    // Argumentos da fun��o: void gluOrtho2D(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top)
    gluOrtho2D (0.0f, 600.0f, 0.0f, 600.0f);  // (xo, x, yo, y)

	//Limpa todos os pixels com a cor de fundo
	glClear(GL_COLOR_BUFFER_BIT);

	//Configura a cor
    //glColor3f (1.0, 1.0, 1.0); // RGB

    glBegin(GL_QUADS);
        glColor3ub(100, 150, 255);//rand()%255, rand()%255, rand()%255);
        glVertex2i(0, 600);
        glVertex2i(600, 600);
        glColor3ub(255, 255, 255);
        glVertex2i(600, 0);
        glVertex2i(0, 0);
    glEnd();

    // Desenha um quadrado preenchido com a cor corrente
    glBegin(GL_QUADS);
        glColor3ub(255, 255, 0);//rand()%255, rand()%255, rand()%255);
        glVertex2i(100, 15);
        glVertex2i(100, 350);
        glVertex2i(500, 350);
        glVertex2i(500, 15);

        glColor3ub(0, 255, 0);//rand()%255, rand()%255, rand()%255);
        glVertex2i(170, 350);
        glVertex2i(170, 500);
        glVertex2i(430, 500);
        glVertex2i(500, 350);

        glColor3ub(150, 75, 0);//rand()%255, rand()%255, rand()%255);
        glVertex2i(100, 15);
        glVertex2i(100, 195);
        glVertex2i(220, 195);
        glVertex2i(220, 15);

        glColor3ub(248, 248, 248);//rand()%255, rand()%255, rand()%255);
        glVertex2i(260, 210);
        glVertex2i(260, 308);
        glVertex2i(460, 308);
        glVertex2i(460, 210);
    glEnd();

    glLineWidth(10);
    glBegin(GL_LINES);
        glColor3ub(230, 230, 230);//rand()%255, rand()%255, rand()%255);
        glVertex2i(360, 210);
        glVertex2i(360, 307);

        glColor3ub(230, 230, 230);//rand()%255, rand()%255, rand()%255);
        glVertex2i(260, 259);
        glVertex2i(460, 259);
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
        glColor3ub(0, 0, 255);//rand()%255, rand()%255, rand()%255);
        glVertex2i(100, 350);
        glVertex2i(170, 500);
        glVertex2i(240, 350);
    glEnd();

    glPointSize(10.0);
    glBegin(GL_POINTS);
        glColor3ub(0, 0, 0);//rand()%255, rand()%255, rand()%255);
        glVertex2i(205, 105);
    glEnd();

    glPointSize(1.0);
    glBegin(GL_POINTS);
        for(int y=0; y<15; y++)
            for(int x=0; x<600; x++){
                glColor3ub(rand()%255, 255, rand()%255);//rand()%255, rand()%255, rand()%255);
                glVertex2i(x, y);
        }
    glEnd();

	//Habilita a execu��o de comandos OpenGL
	glFlush();
}

//Inicializa par�metros
void init (void)
{
    // Configura a cor de fundo como preta
    glClearColor(0.9f, 0.8f, 0.99f, 1.0f);
}

//Principal
int main(void)
{
    srand(time(NULL));
    //Tipo de janela (single-buffered) e cores utilizados
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	//Configura o tamanho da janela
	glutInitWindowSize (600, 600);
	//Configura a posi��o inicial da janela
	glutInitWindowPosition (360, 100);
	//Configura a janela
	glutCreateWindow("Teste do OpenGL");
	//Chama a fun��o desenha
	glutDisplayFunc(desenha);
	//Inicializa o programa
	init();
	//Habilita o loop (m�quina de estados)
	glutMainLoop();
}
*/
