import java.awt.*;
import java.awt.event.*;
import java.util.Scanner;

class MyFrame6 extends Frame
{
Font f;
String msg;
MyFrame6()
{
setTitle("Font Information");
setSize(600,400);
setVisible(true);
addWindowListener(new MyWindowAdapter());
}

public void paint(Graphics g)
{
Font f=g.getFont();
String fontName=f.getName();
String fontFamily=f.getFamily();
int fontSize=f.getSize();
int fontStyle=f.getStyle();
String str="Font: "+fontName+" Family: "+fontFamily+" Size: "+fontSize+" Style: "+fontStyle;

g.drawString(str, 40,100);
}

public static void main(String args[])
{
MyFrame6 mf6=new MyFrame6();
}
}



class MyWindowAdapter extends WindowAdapter
{
public void windowClosing(WindowEvent we)
{
System.exit(0);
}
}