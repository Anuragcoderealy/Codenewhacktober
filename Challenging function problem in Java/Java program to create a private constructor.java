class Test {

  // create private constructor
  private Test () {
    System.out.println("This is a private constructor.");
  }

  // create a public static method
  public static void instanceMethod() {

    // create an instance of Test class
    Test obj = new Test();
  }

}

class Main {

  public static void main(String[] args) {

    // call the instanceMethod()
    Test.instanceMethod();
  }
}