//This function takes two arguents: x and power, and return the mathematical result of x^power. 
// we have 3 variables for this calculation, I represent them as a 3-tuple for clarity (current_product, x, power)
// consider x = 3, power = 5 
// initially the three tuple is (1,3,5), after first iteration we get (3,3*3=9,2), second iteration we get (3,9*9=81,1)
//after third iteration we get (3*81=243,81*81,0), and since power is less than 0, it will be our final iteration
int PowerofX(int x, int power) {
    int current_product = 1;
    while (power > 0) { 
        if (power % 2 == 1) { //if power is odd
            current_product = x * current_product; //mutiply one more time for the 1 left
        }
        x = x * x; //mutiply once
        power = power / 2; //the powering steps left(note that it is always an int because of /)
    };
    printf("%d", current_product);
    return current_product;
}

int main(){
    PowerofX(3,5);
}
//note that due to the bytes limit of int, it can only return results within 32 bits in pricision 

//In addition, this calculation can be done easily with recursion: 
/*
int PowerOfX(int x, int power){
    if (power == 0){ //base case
        return 1;
    }
    elif (power % 2 == 1){ //power is odd
        return (PowerOfX(x, power / 2) * PowerOfX(x, power / 2) * x);
    }
    else{ //power is even
        return (PowerOfX(x, power / 2) * PowerOfX(x, power / 2));
    }
}
*/
