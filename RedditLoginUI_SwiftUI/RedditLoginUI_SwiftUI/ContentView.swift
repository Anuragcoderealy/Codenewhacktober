//
//  ContentView.swift
//  RedditLoginUI_SwiftUI
//
//  Created by Ujjwal Rawat on 25/07/22.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
      LoginView()
    }
}

struct LoginView: View {
    @State var username = ""
    @State var password = ""
    
    var body: some View {
        ZStack(alignment: .bottom) {
            VStack{
                Image("background")
                    .resizable()
                    .shadow(radius: 45)
                    .aspectRatio(contentMode: .fit)
                    .ignoresSafeArea(.all, edges: .top)

                Spacer()
            }
            VStack(alignment: .leading, spacing: 17, content: {
                HStack {
                    Text("The Best")
                        .font(.system(size:45))
                        .fontWeight(.bold)
                    Text("Reddit")
                        .font(.system(size:45))
                        .fontWeight(.bold)
                        .underline()
                        .scaledToFit()
                        .foregroundColor(Color(#colorLiteral(red:0.914072752, green:0.3077585399, blue:0.08124504238, alpha: 1)))
                    Spacer()
                }
                Text("Experience!")
                    .font(.system(size: 45))
                    .fontWeight(.bold)
                CustomFieldView(text: $username, label: "Username")
                    .padding(.top, 30)
                CustomFieldView(text: $password, label: "Password")
                    .padding(.top, 30)
                HStack{
                    Text("New to Reddit?")
                        .fontWeight(.semibold)
                        .foregroundColor(.orange)
                    Spacer()
                    Button(action: {}, label: {
                        Text("Log In")
                            .font(.title)
                            .fontWeight(.semibold)
                            .foregroundColor(.white)
                            .background(RoundedRectangle(cornerRadius: 10)
                                .fill(Color.orange)
                                .frame(width: 190, height: 60))
                            .shadow(color: Color(#colorLiteral(red:0.914072752, green:0.3077585399, blue:0.08124504238, alpha: 1)), radius: 20 , x:0, y:10)
                                .padding()
                    })
                    .padding(.trailing, 50)
                    }
                .padding(.vertical, 10)
                .padding(.horizontal, 10)
                .background(Color.white).ignoresSafeArea(.all, edges: .bottom)
                .cornerRadius(25)

            })
        }
    }
}
struct CustomFieldView: View {
    @Binding var text: String
    var isSecure = false
    var label: String
    
    var body: some View {
        VStack(alignment: .leading, spacing: 1, content: {
            Text(label)
                .fontWeight(.bold)
                .foregroundColor(.gray)
            if isSecure {
                SecureField("", text : $text)
            } else {
                TextField("", text: $text)
                    .keyboardType(.emailAddress)
                    .autocapitalization(.none)
            }
            Rectangle()
                .frame(maxWidth: .infinity)
                .frame(height: 2)
                .foregroundColor(.gray.opacity(0.7))
        })
    }
}
struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        Group {
            ContentView()
        }
        }
    }

