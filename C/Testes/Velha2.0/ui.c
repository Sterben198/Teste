int i=0;
int * ui(char tabu[3][3]){
    int * array;
    array = calloc(3,sizeof(int));
  
    for(i =0;i < 3;i++){

        if(tabu[i][0] == 'X'){
            if(tabu[i][1] == 'X'){
                if(tabu[i][2] == '#'){
                array[0] = i;
                array[1] = 2;
                array[2] = 1;
                return array;
                }
            }
        }
        else if(tabu[i][2] == 'X'){
            if(tabu[i][1] == 'X'){
                if(tabu[i][0] == '#'){
                array[0] = i;
                array[1] = 0;
                array[2] = 1;
                return array;
                }
            }
        }
        if(tabu[0][i] == 'X'){
            if(tabu[1][i] == 'X'){
                if(tabu[2][i] == '#'){
                array[0] = i;
                array[1] = 2;
                array[2] = 2;
                return array;
                }
            }
        }
        else if(tabu[2][i] == 'X'){
            if(tabu[1][i] == 'X'){
                if(tabu[0][i] == '#'){
                array[0] = i;
                array[1] = 0;
                array[2] = 2;
                return array;
                }
            }
        }
    }
        if(tabu[0][2] == 'X'){
            if(tabu[1][1] == 'X'){
                if(tabu[2][0] == '#'){

                    array[0] = 2;
                    array[1] = 0;
                    array[2] = 1;
                    return array;
                }
            }
        }
        if(tabu[0][0] == 'X'){
            if(tabu[1][1] == 'X'){
                if(tabu[2][2] == '#'){

                    array[0] = 2;
                    array[1] = 2;
                    array[2] = 2;
                    return array;
                }
            }
        }

        
    return array;
}