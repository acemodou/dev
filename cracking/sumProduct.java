public class sumProduct{


public static void addMultiply(int array[]){

    int sum = 0;
    int product = 1;
    for(int i = 0; i < array.length; i++){
        sum += array[i];
    }

    for(int j = 0; j < array.length;j++){
        product *=array[j];
    }

    System.out.println("sum = " + sum + " Product = " + product );
 
}

public static void main(String [] args){

int array[] = {1,2,3,4,5};

addMultiply(array);
 
}
} 
