import java.awt.*;
import java.awt.event.*;

class MyFrame31 extends Frame
{
int chx, chy;
MyFrame31()
{
setTitle("Setting the paint mode");
setSize(300,250);
setVisible(true);
addMouseMotionListener(new MyMouseMotionAdapter(this));
addWindowListener(new MyWindowAdapter());
}
public void paint(Graphics g)
{
g.setColor(Color.red);
g.fillRoundRect(70,90,140,100,30,40);
g.setColor(Color.green);
g.fillRect(100,110,60,50);
g.setXORMode(Color.white);
g.drawLine(chx-10,chy,chx+10,chy);
g.drawLine(chx,chy-10,chx,chy+10);
g.setPaintMode();
}
public static void main(String args[])
{
MyFrame31 m3=new MyFrame31();
}
}
class MyMouseMotionAdapter extends MouseMotionAdapter
{
MyFrame31 m_f3;
MyMouseMotionAdapter(MyFrame31 mf3)
{
m_f3=mf3;
}
public void mouseMoved(MouseEvent me)
{
int x=me.getX();
int y=me.getY();
m_f3.chx=x-10;
m_f3.chy=y-10;
m_f3.repaint();
}
}
class MyWindowAdapter extends WindowAdapter
{
public void windowClosing(WindowEvent we)
{
System.exit(0);
}
}