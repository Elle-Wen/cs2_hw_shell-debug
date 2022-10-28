/*
//creating a sturct that has two int values associated with it 
struct point2d{
int x;
int y;
};
//it just output the third and fouth argument the user gives as x- y- coordinate of a point p
int main(int argc, char* argv[]) {  //takes input of 1.number of argument in command 2.an array of pointrs to the strings in command
    int m = atoi(argv[1]); //m is the number representing the first useful command(which is a string)
    struct point2d *p;
    p = malloc(sizeof(struct point2d));
    p->x = atoi(argv[2]); //p.x is the number representing the second useful command 
    p->y = atoi(argv[3]); //p.y is the number representing the third useful command  
    printf("x coord: %d\n", p->x);
    printf("y coord: %d\n", p->y);
    free (p);
    return 0;
};
//actually, this function can be easily done by:
*/
//This function prints the second and thrid command after the function name 
//eg. ./debug2.c start 1 2 gives output x coord: 1 y coord: 2
int main(int argc, char* argv[]){
    int x = atoi(argv[2]);
    int y = atoi(argv[3]);
    printf("x coord: %d\n", x);
    printf("y coord: %d\n", y);
    return 0;
}
