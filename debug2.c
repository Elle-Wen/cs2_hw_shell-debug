//creating a sturct that has two int values associated with it 
struct point2d{
int x;
int y;
};

int main(int argc, char* argv[]) {  //takes input of 1.number of argument in command 2.an array of pointrs to the strings in command
    int m = atoi(argv[1]); //m is the number representing the first useful command(which is a string)
    struct point2d *p;
    p = malloc(sizeof(struct point2d));
    p->x = atoi(argv[2]); //p.x is the number representing the second useful command 
    p->y = atoi(argv[3]); //p.y is the number representing the third useful command
    struct point2d *z;
    z = malloc(sizeof(struct point2d));
    z->x = 0;
    z->y = z->y - (m * p->x); 
    printf("x coord: %d\n", p->x);
    printf("y coord: %d\n", p->y);
    free (p);
    free (z);
    return 0;
};
