int bin_recursion(int n){// prints binary in reverse order
    if(n==0) return 0;
    else {
        return ( n%2 + (10* bin_recursion(n/2)));
    }
}

int bin(int n){// prints binary in reverse order
    int r;
    while (n>0){
        r=n%2;printf("%d",r);
        n=n/2;
    }
}
