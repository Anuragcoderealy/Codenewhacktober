//
//  ViewController.swift
//  RedditLoginUI_SwiftUI
//
//  Created by Ujjwal Rawat on 25/07/22.
//

import UIKit

class ViewController: UIViewController{
    
    @IBOutlet weak var username: UITextField?
    @IBOutlet weak var password: UITextField?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        let us = UIImage(named: "username")
        addleftimage(txtField: username! , andimage: us!)
        let pass = UIImage(named: "password")
        addleftimage(txtField: password! , andimage: pass!)
        
    }
    func addleftimage(txtField: UITextField, andimage img:UIImage)
    {
        let leftimageview = UIImageView(frame: CGRect(x: 0.0, y:0.0, width:20, height: 20))
        leftimageview.image = img
        txtField.leftView = leftimageview
        txtField.leftViewMode = .always
    }
    

    
    
}
