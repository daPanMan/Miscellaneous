public class solution {
  public static void strings(String[] in){
    int max = 0;
    for(int i = 0; i < in.length; i++){
      if(in[i].length() > max){
        max = in[i].length();
      }
    }
    for(int a = 0; a < max+4; a++){
      System.out.print("*");
    }
    System.out.println();
    for(int b = 0; b < in.length; b++){
      System.out.print("*");
      System.out.print(" ");
      System.out.print(in[b]);
      for(int m = 0; m < max+1-in[b].length();m++){
        System.out.print(" ");
      }
      System.out.println("*");
    }
    for(int a = 0; a < max+4; a++){
      System.out.print("*");
    }
    
    System.out.println();
  }
  public static void main(String[]args){
    String[] names = {"Hello", "World", "in", "a", "frame"};
    strings(names);
  }
}