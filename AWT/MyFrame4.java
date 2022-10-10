import java.awt.*;
import java.awt.event.*;

class MyFrame4 extends Frame
{
MyFrame4()
{
setTitle("Available Fonts");
setSize(400,600);
setVisible(true);
addWindowListener(new MyWindowAdapter());
}

public void paint(Graphics g)
{
String msg="Font Environment:- ";
String fList[];
GraphicsEnvironment ge=GraphicsEnvironment.getLocalGraphicsEnvironment();
fList=ge.getAvailableFontFamilyNames();
for(int i=0;i<fList.length;i++)
   msg+=fList[i]+",  ";
g.drawString(msg,40,160);
}

public static void main(String args[])
{
MyFrame4 mf4=new MyFrame4();
}
}

class MyWindowAdapter extends WindowAdapter
{
public void windowClosing(WindowEvent we)
{
System.exit(0);
}
}