import java.awt.*;  
import java.awt.event.*;

class Firstawt extends Frame
{  
Firstawt()
{ 
super("My First AWT Program"); //calling Frame class constructor from Firstawt contsructor
Button b=new Button("click me");  
b.setBounds(30,100,70,30);// setting button position and size of the components  
  
add(b);//adding button into frame  
setSize(300,300);//frame size 300 width and 300 height  
setLayout(null);//no layout manager  
setVisible(true);//now frame will be visible, by default not visible 

addWindowListener(new MyWindowAdapter()); //register the event into this component
} 
 
public static void main(String args[])
{  
Firstawt f=new Firstawt();  
}
}  

class MyWindowAdapter extends WindowAdapter
{
public void windowClosing(WindowEvent we)
{
 System.exit(0);
}
}