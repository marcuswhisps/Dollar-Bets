//
//  BookViewController.h
//  DollarBets
//
//  Created by Richard Kirk on 8/22/11.
//  Copyright (c) 2011 Home. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Opponent.h"

@protocol BookViewControllerDelegate <NSObject>

-(void)addNewBook;
-(void)opponentCreatedWithName:(NSString *)oppName;

@end


@interface BookViewController : UIViewController {
    UILabel *opponentLabel;
    UILabel *dateLabel;
    UIImageView *plusSignImageView;

    UILabel *debugPageNumber;
    UIButton *plusSignButton;
    UITextField *opponentTextField;
    bool newBook;
    
    id<BookViewControllerDelegate> delegate;
    
    
    
}

@property (strong, nonatomic) IBOutlet UILabel *opponentLabel;
@property (strong, nonatomic) IBOutlet UILabel *dateLabel;
@property (strong, nonatomic) IBOutlet UIImageView *plusSignImageView;
@property (strong, nonatomic) IBOutlet UILabel *debugPageNumber;
@property (strong, nonatomic) IBOutlet UIButton *plusSignButton;
@property (strong, nonatomic) IBOutlet UITextField *opponentTextField;
@property (strong, nonatomic) Opponent * opponent;


@property (strong, nonatomic)id delegate;


-(id)initAsAddBook;
-(id)initWithOpponent:(Opponent *)opp;
-(IBAction)plusSignPressed:(id)sender;
-(IBAction)enteredNewOpponentName:(UITextField *)sender;

-(void)showPlusButton;
-(void)hidePlusButton;
-(void)showOpponentLabel;
-(void)hideOpponentLabel;
-(void)showOpponentTextField;
-(void)hideOpponentTextField;
-(void)showDateLabel;
-(void)hideDateLabel;



@end
