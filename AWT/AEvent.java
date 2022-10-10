import java.awt.*;
import java.awt.event.*;

class AEvent extends Frame implements ActionListener
{
TextField tf;

AEvent()
{
tf=new TextField();
tf.setBounds(60,50,170,20);

Button b=new Button("CLICK ME");
b.setBounds(100,120,80,30);

b.addActionListener(this);
addWindowListener(new MyWindowAdapter());
add(tf);
add(b);

setSize(300,300);
setLayout(null);
setVisible(true);
}

public void actionPerformed(ActionEvent e)
{
tf.setText("WELCOME");
}

public static void main(String args[])
{
AEvent ae;
ae=new AEvent();
}
}

class MyWindowAdapter extends WindowAdapter
{
public void windowClosing(WindowEvent we)
{
 System.exit(0);
}
}