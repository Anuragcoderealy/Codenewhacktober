import java.awt.*;
import java.awt.event.*;

public class MyFrame2 extends Frame
{

MyFrame2()
{
setSize(600, 400);
setTitle("Graphics class Methods");
setVisible(true);
addWindowListener(new MyWindowAdapter());
}

public void paint(Graphics g)
{
Color c=new Color(255,150,100);
g.setColor(c);
g.drawLine(20, 60, 80, 100);
g.drawRect(100, 60, 80, 40);
g.setColor(Color.RED);
g.fillRect(200, 60, 80, 40);
g.drawRoundRect(300, 60, 80, 40, 20, 20);
g.setColor(Color.BLUE);
g.fillRoundRect(400, 60, 80, 40, 20, 20);
g.drawOval(20, 120, 80, 40);
g.setColor(Color.ORANGE);
g.fillOval(120, 120, 80, 40);
g.drawArc(220, 120, 80, 40, 90, -90);
g.setColor(Color.MAGENTA);
g.fillArc(320, 120, 80, 40, 90, -90);
int[] x = {20, 100, 80, 20};
int[] y = {200, 180, 240, 260};
g.drawPolygon(x, y, 4);
g.setColor(Color.CYAN);
int[] fillx = {120, 200, 180, 120};
int[] filly = {200, 180, 240, 260};
g.fillPolygon(fillx, filly, 4);
}

public static void main(String[] args)
{
MyFrame2 mf = new MyFrame2();
}

}

class MyWindowAdapter extends WindowAdapter
{
public void windowClosing(WindowEvent we)
{
System.exit(0);
}
}