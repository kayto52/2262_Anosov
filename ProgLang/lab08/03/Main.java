public class Main {
    public static void main(String[] args) {
        int[][] a = {
            {1, 2, 3},
            {4, 0, 6},
            {7, 0, 9}
        };

        search:
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                if (a[i][j] == 0) {
                    System.out.println("Ноль найден: строка " + i + ", столбец " + j);
                    break search;
                }
            }
        }
    }
}
