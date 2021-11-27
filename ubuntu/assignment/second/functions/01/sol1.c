#include <stdio.h>

float computeKE(float mass, float velocity)
{
    float ke;
    ke = 0.5 * mass * velocity * velocity;
    return ke;
};

int main()

{

    float mass, velocity, ke;
    printf("Enter the mass of the object: ");
    scanf("%f", &mass);
    printf("Enter the velocity of the object: ");
    scanf("%f", &velocity);
    ke = computeKE(mass, velocity);
    printf("The kinetic energy of the object is: %f\n", ke);

    return 0;
}
