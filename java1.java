package ashproject;

import javax.swing.*; 
import java.awt.*; 
import java.awt.event.*; 
public class javash extends JFrame implements ActionListener { 
    JButton alphaButton, betaButton; 
    JLabel messageLabel; 
 
    public javash() { 
        setTitle("Button Event Handling Example"); 
        setSize(300, 200); 
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
 
        alphaButton = new JButton("Alpha"); 
        betaButton = new JButton("Beta"); 
        messageLabel = new JLabel(""); 
 
        alphaButton.addActionListener(this); 
        betaButton.addActionListener(this); 
 
        setLayout(new FlowLayout()); 
        add(alphaButton); 
        add(betaButton); 
        add(messageLabel); 
        setVisible(true); 
    } 
 
    public void actionPerformed(ActionEvent e) { 
        if (e.getSource() == alphaButton) { 
            messageLabel.setText("Alpha pressed"); 
        } else if (e.getSource() == betaButton) { 
            messageLabel.setText("Beta pressed"); 
        } 
    } 
 
    public static void main(String[] args) { 
        SwingUtilities.invokeLater(new Runnable() { 
            public void run() { 
                new javash(); 
            } 
        }); 
    } 
} 
//in buildpath -> modulepath change run in environment 
