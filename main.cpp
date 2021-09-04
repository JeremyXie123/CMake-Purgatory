#include <iostream>
#include "Adder/adder.h" // Include the header so the program knows add is a function that will be defined before it's called
#include <GLFW/glfw3.h>

using namespace std;
int main() {
    cout << "Hello World!" << endl;
    cout << add(72.1 , 73.8) << endl;

    GLFWwindow *window;
    
    if (!glfwInit()) {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

    window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window) {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

    // Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // Draw gears
        // draw();

        // Update animation
        // animate();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

    return 0;
}