package BinaryToDecimal;

import java.util.Scanner;

public class binaryToDecimal {
	public static void main(String[]args){
		String array;
		int decimal = 0;
		Scanner s = new Scanner(System.in);

		do{
			try{
				System.out.print("Enter your binary string: ");
				array = s.nextLine();

				for (int i = 0; i < array.length();i++){
					if (array.charAt(i) != '0' && array.charAt(i) != '1'){
						throw new Exception("Invalid");
					}
					else{
						decimal *=2;
						decimal += Integer.parseInt(Character.toString(array.charAt(i)));
						System.out.println(decimal);

					}
				}
				System.out.println(decimal);
				break;

			}catch (Exception e){
				System.out.println(e.getMessage());
			}
		}while(true);
	}
}