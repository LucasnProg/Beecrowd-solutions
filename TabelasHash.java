import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

public class TabelasHash {

    static BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    static PrintWriter output = new PrintWriter(System.out);

    public static void main(String[] args) throws IOException {
        int numberOfTests = Integer.parseInt(input.readLine());
        while (numberOfTests-- > 0) {
            int tableSize = Integer.parseInt(input.readLine().split("\\s")[0]);
            String[] hashTable = new String[tableSize];
            Arrays.fill(hashTable, "");

            String[] elements = input.readLine().split("\\s");
            for (String element : elements) {
                int index = Integer.parseInt(element) % tableSize;
                hashTable[index] += " -> " + element;
            }

            for (int i = 0; i < tableSize; i++) {
                output.println(i + hashTable[i] + " -> \\");
            }

            if (numberOfTests != 0) {
                output.println();
            }
        }
        output.close();
    }
}