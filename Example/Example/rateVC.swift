//
//  rateVC.swift
//  Example
//
//  Created by John Blaine on 12/1/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit
import mContact


class rateVC: UIViewController {
    var rate : mContact?

    override func viewDidLoad() {
        super.viewDidLoad()
        self.edgesForExtendedLayout = []
        
        rate = mContact(frame: CGRect.zero)
        self.view.addSubview(rate!)
        self.view.backgroundColor = UIColor.red

        self.rate?.addIt("Maya",
                         address: "55 Huaykaew Rd, ตำบล ช้างเผือก",
                         city: "เชียงใหม่ 50300",
                         email: "native.jong@gmail.com",
                         lat: "18.802048823805322",
                         lng: "98.96701371992492",
                         phone: "1.800.123.4567",
                         web: "www.site.com")
        
        self.rate?.addIt("Maya 2",
                         address: "55 Huaykaew Rd, ตำบล ช้างเผือก",
                         city: "เชียงใหม่ 50300",
                         email: "native.jong@gmail.com",
                         lat: "18.802048823805322",
                         lng: "98.96701371992492",
                         phone: "1.800.123.4567",
                         web: "www.site.com")


        self.rate?.refresh()
    }
    

    override func viewWillLayoutSubviews() {
        let w = self.view.frame.size.width;
        let h = self.view.frame.size.height;
        rate?.frame = CGRect(x: w * 0.0, y: h * 0.0, width: w * 1.0, height: h * 1.0)
    }

}
