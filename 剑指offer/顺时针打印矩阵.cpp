//顺时针打印矩阵
//输入一个矩阵，按照从外向里以顺时针的顺序依次打印出每一个数字，例如，如果输入如下矩阵： 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 则依次打印出数字1,2,3,4,8,12,16,15,14,13,9,5,6,7,11,10.
vector<int> printMatrix(vector<vector<int> > matrix) {
        int rows1=0,cols1=0;
        int rows2=matrix.size(),cols2=matrix[0].size();
        vector<int> result;
        while(1){
            //由左打印到右
            for(int i=cols1;i<cols2;i++){
                result.push_back(matrix[rows1][i]);
            }
            rows1++;
            if(rows1 >= rows2){
                break;
            }
            //由上打印到下
            for(int i=rows1;i<rows2;i++){
                result.push_back(matrix[i][cols2-1]);
            }
            cols2--;
            if(cols1 >= cols2){
                break;
            }
            //由右打印到左
            for(int i=cols2-1;i>=cols1;i--){
                result.push_back(matrix[rows2-1][i]);
            }
            rows2--;
            if(rows1 >= rows2){
                break;
            }
            //由下打印到上
            for(int i=rows2-1;i>=rows1;i--){
                result.push_back(matrix[i][cols1]);
            }
            cols1++;
            if(cols1 >= cols2){
                break;
            }
        }
        return result;
    }