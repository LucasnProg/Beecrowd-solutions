import java.io.*;

public class BalancoDeParenteses {
    public static void main(String[] args) throws IOException {
        InputStreamReader input = new InputStreamReader(System.in);
        BufferedReader string = new BufferedReader(input);

        while(string.ready()){

            char[] line = string.readLine().trim().toCharArray();
            int index;
            int parentheses = 0;

            for(index = 0; index < line.length; ++index){
                if(line[index] == '(')
                    parentheses += 1;
                else if(line[index] == ')'){
                    if(parentheses == 0)
                        break;
                    parentheses -= 1;
                }
            }

            if(index == line.length && parentheses == 0){
                System.out.println("correct");
            }else{
                System.out.println("incorrect");
            }

        }
    }
}