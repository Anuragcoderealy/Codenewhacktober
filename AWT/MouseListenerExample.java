import java.awt.*;  
import java.awt.event.*;  
public class MouseListenerExample extends Frame implements MouseListener, MouseMotionListener
{  
	Label lbl;  
        MouseListenerExample()
        {  
	        addMouseListener(this);
		addMouseMotionListener(this);  
		addWindowListener(new MyWindowAdapter());
                lbl=new Label();  
        	lbl.setBounds(20,50,100,20);  
        	add(lbl);  
        	setSize(300,300);  
        	setLayout(null);  
        	setVisible(true);  
    	}  
    	public void mouseClicked(MouseEvent e) 
	{  
        	lbl.setText("Mouse Clicked");  
    	}  
    	public void mouseEntered(MouseEvent e) 
	{  
        	lbl.setText("Mouse Entered");  
    	}  
    	public void mouseExited(MouseEvent e) 
	{  
        	lbl.setText("Mouse Exited");  
    	}  
    	public void mousePressed(MouseEvent e) 
	{  
        	lbl.setText("Mouse Pressed");  
    	}  
    	public void mouseReleased(MouseEvent e) 
	{  
        	lbl.setText("Mouse Released");  
    	} 
	public void mouseMoved(MouseEvent e) 
	{  
        	lbl.setText("Mouse Moved");  
    	}   
	public void mouseDragged(MouseEvent e) 
	{  
        	lbl.setText("Mouse Dragged");  
    	}   
	public static void main(String[] args) 
	{  
    		new MouseListenerExample();  
	}  
}  

class MyWindowAdapter extends WindowAdapter
{
public void windowClosing(WindowEvent we)
{
System.exit(0);
}
}