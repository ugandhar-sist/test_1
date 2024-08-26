import java.util.*;

public class Column {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        StringBuilder col = new StringBuilder();
        while (n > 0) {
            int r = (n-1)%26;
            col.insert(0, (char)(r+'A'));
        }
        System.out.print(col);
    }
}
