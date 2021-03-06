//
//  TableViewCell.h
//  ObjectiveC_Challenge
//
//  Created by Guilherme Rangel on 18/03/20.
//  Copyright © 2020 Vitor Demenighi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomImageView.h"
#import "Movie.h"

NS_ASSUME_NONNULL_BEGIN

@interface TableViewCell : UITableViewCell

@property (nonatomic) Movie *movie;

@property (weak, nonatomic) IBOutlet CustomImageView *movieImage;
@property (weak, nonatomic) IBOutlet UILabel *movieTitle;
@property (weak, nonatomic) IBOutlet UILabel *movieOverview;
@property (weak, nonatomic) IBOutlet UILabel *movieRate;
@property (weak, nonatomic) IBOutlet UIImageView *movieStar;


@end

NS_ASSUME_NONNULL_END
