import java.awt.*;
import java.awt.event.*;
import java.util.Scanner;

class MyFrame5 extends Frame
{
Font f;
String msg;
MyFrame5()
{
setTitle("Creating and Selecting a Font");
setSize(450,200);
setVisible(true);
f=new Font("Dialog",Font.PLAIN,12);
msg="Dialog";
setFont(f);
addWindowListener(new MyWindowAdapter());
addMouseListener(new MyMouseAdapter(this));
}
public void paint(Graphics g)
{
g.drawString(msg, 40,100);
}

public static void main(String args[])
{
new MyFrame5();
}
}

class MyMouseAdapter extends MouseAdapter
{
MyFrame5 mf5;
MyMouseAdapter(MyFrame5 m_f5)
{
mf5=m_f5;
}
public void mousePressed(MouseEvent me)
{
Scanner s=new Scanner(System.in);

System.out.println("Enter 0 for Dialog\n"+
"Enter 1 for DialogInput\n"+
"Enter 2 for SansSerif\n"+
"Enter 3 for Serif");
int choice=s.nextInt();
switch(choice)
{
case 0:
mf5.f=new Font("Dialog",Font.BOLD,12);
mf5.msg="Font Name: Dialog";
break;
case 1:
mf5.f=new Font("DialogInput",Font.PLAIN,18);
mf5.msg="Font Name: DialogInput";
break;
case 2:
mf5.f=new Font("SansSerif",Font.ITALIC,20);
mf5.msg="Font Name: SansSerif";
break;
case 3:
mf5.f=new Font("Serif",Font.PLAIN,24);
mf5.msg="Font Name: Serif";
break;
}
mf5.setFont(mf5.f);
mf5.repaint();
}
}

class MyWindowAdapter extends WindowAdapter
{
public void windowClosing(WindowEvent we)
{
System.exit(0);
}
}