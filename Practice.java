import java.io.File;
import java.util.Scanner;

class Box {
  int a = 10; // for sgowing use super keyword
  private int l, b, h;

  public void setDimension(int x, int y, int z) {
    l = x;
    b = y;
    h = z;
  }

  public void printVolume() {
    System.out.println("Volume= " + (l * b * h));
  }
}

class B extends Box {
  int a = 20;
  void show() {
    // System.out.println(super.a*a);
  }

public class Practice {
  public static void main(String[] args) {
    System.out.println("Hello");
    int x;
    Scanner sc = new Scanner(System.in);
    x = sc.nextInt();
    System.out.println("Hello" + (x + 10));
    Box B = new Box();
    sc.close();
    B.setDimension(10, 5, 2);
    B.printVolume();
    Integer i = Integer.parseInt("1234");
    System.out.println(i.toString());
    B b = new B();
    b.show();
    System.out.println(b.a);
    File myFile=new File("Java.txt");
    try {
      myFile.createNewFile();
    } catch (Exception e) {
      e.printStackTrace();
    }
    
  }
}